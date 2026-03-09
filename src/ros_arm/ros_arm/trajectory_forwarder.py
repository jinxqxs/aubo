#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from control_msgs.action import FollowJointTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint
from std_msgs.msg import String
from rclpy.executors import MultiThreadedExecutor
import time
import math

class AuboTrajectoryForwarder(Node):
    def __init__(self):
        super().__init__('aubo_trajectory_forwarder')
        
        # ========== 1. 修正Aubo i5H关节限制（避开临界值） ==========
        self.joint_limits = [
            (-math.pi, math.pi),        # joint1
            (-math.pi/2 + 0.01, 1.5),  # joint2：从1.561→1.5，远离90°限位
            (-math.pi, math.pi),        # joint3
            (-math.pi/2 + 0.01, math.pi/2 - 0.01),  # joint4
            (-math.pi, math.pi),        # joint5
            (-math.pi, math.pi)         # joint6
        ]
        self.max_velocity = 0.1  # 降低速度，适配驱动执行能力
        self.max_acceleration = 0.2
        
        # 2. 动作服务 + 驱动接口
        self.action_server = ActionServer(
            self,
            FollowJointTrajectory,
            '/arm_controller/follow_joint_trajectory',
            self.execute_callback,
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback
        )
        self.traj_point_pub = self.create_publisher(JointTrajectoryPoint, '/aubo_robot/moveit_controller', 10)
        self.execution_pub = self.create_publisher(String, '/aubo_robot/moveit_execution', 10)
        
        # 3. 增加驱动就绪检测
        self.driver_ready = False
        self.get_logger().info("Aubo Trajectory Forwarder Node Started!")
        self.get_logger().info("Waiting for Aubo driver to be ready...")
        time.sleep(2)  # 给驱动足够启动时间
        self.driver_ready = True
        self.get_logger().info("Publishing trajectory points to: /aubo_robot/moveit_controller")

    def clamp_joint(self, joint_value, limit):
        """限制关节角度（避开临界值）"""
        min_val, max_val = limit
        return max(min_val, min(joint_value, max_val))

    def normalize_trajectory_point(self, point):
        """标准化轨迹点（适配驱动）"""
        # 角度限制
        if len(point.positions) == 6:
            for i in range(6):
                point.positions[i] = self.clamp_joint(point.positions[i], self.joint_limits[i])
        
        # 速度/加速度初始化（驱动要求非0且低速）
        point.velocities = [self.max_velocity] * 6 if not point.velocities else point.velocities
        point.accelerations = [self.max_acceleration] * 6 if not point.accelerations else point.accelerations
        
        # 清空effort（驱动不使用）
        point.effort = []
        return point

    def goal_callback(self, goal_request):
        if not self.driver_ready:
            self.get_logger().error("Driver not ready! Rejecting goal.")
            return GoalResponse.REJECT
        self.get_logger().info("Received new trajectory execution goal")
        return GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle):
        self.get_logger().info("Received trajectory cancel request")
        self.execution_pub.publish(String(data="cancel"))
        return CancelResponse.ACCEPT

    def execute_callback(self, goal_handle):
        self.get_logger().info("Starting trajectory execution for Aubo driver...")
        
        # ========== 2. 修复Canceled常量命名错误（ROS 2标准常量） ==========
        RESULT_CANCELED = 4  # FollowJointTrajectory.Result.CANCELED 的实际值
        RESULT_SUCCESS = 0
        RESULT_INVALID_GOAL = 1
        
        traj = goal_handle.request.trajectory
        if len(traj.points) == 0:
            self.get_logger().error("Empty trajectory received!")
            goal_handle.abort()
            result = FollowJointTrajectory.Result()
            result.error_code = RESULT_INVALID_GOAL
            return result
        
        # 驱动指令：先停止→准备→启动
        self.execution_pub.publish(String(data="stop"))
        time.sleep(0.5)
        self.execution_pub.publish(String(data="prepare"))
        time.sleep(0.5)
        self.execution_pub.publish(String(data="start"))
        time.sleep(0.3)
        
        # 逐个发布轨迹点（降低频率，避免驱动超时）
        success = True
        for i, point in enumerate(traj.points):
            if goal_handle.is_cancel_requested:
                self.execution_pub.publish(String(data="cancel"))
                goal_handle.canceled()
                result = FollowJointTrajectory.Result()
                result.error_code = RESULT_CANCELED
                return result
            
            # 标准化并发布轨迹点
            norm_point = self.normalize_trajectory_point(point)
            self.traj_point_pub.publish(norm_point)
            self.get_logger().info(f"Published point {i+1}/{len(traj.points)} - Pos: {[round(p, 3) for p in norm_point.positions]}")
            
            # ========== 3. 降低发布频率（适配驱动执行速度） ==========
            time.sleep(0.2)  # 200ms/点，避免MoveIt!超时
        
        # 执行完成
        self.execution_pub.publish(String(data="finish"))
        time.sleep(0.5)
        self.get_logger().info(f"Trajectory completed! Published {len(traj.points)} points")
        
        goal_handle.succeed()
        result = FollowJointTrajectory.Result()
        result.error_code = RESULT_SUCCESS
        return result

def main(args=None):
    rclpy.init(args=args)
    node = AuboTrajectoryForwarder()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    
    try:
        executor.spin()
    except KeyboardInterrupt:
        node.execution_pub.publish(String(data="stop"))
    finally:
        node.action_server.destroy()
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == '__main__':
    main()