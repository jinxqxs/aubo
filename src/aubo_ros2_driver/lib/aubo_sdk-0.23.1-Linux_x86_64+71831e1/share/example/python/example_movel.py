#! /usr/bin/env python
# coding=utf-8

"""
机械臂直线运动

步骤:
第一步: 连接到 RPC 服务
第二步: 机械臂登录
第三步: 先关节运动起始位置，然后循环依次以直线运动的方式经过3个路点
"""
import time
import numpy as np
import pyaubo_sdk
import os

robot_ip = "127.0.0.1"  # 服务器 IP 地址
robot_port = 30004  # 端口号
M_PI = 3.14159265358979323846
robot_rpc_client = pyaubo_sdk.RpcClient()

# 阻塞
def waitArrival(impl):
    cnt = 0
    while impl.getMotionControl().getExecId() == -1:
        cnt += 1
        if cnt > 5:
            print("Motion fail!")
            return -1
        time.sleep(0.05)
        print("getExecId: ", impl.getMotionControl().getExecId())
    id = impl.getMotionControl().getExecId()
    while True:
        id1 = impl.getMotionControl().getExecId()
        if id != id1:
            break
        time.sleep(0.05)

# 先关节运动起始位置，然后循环依次以直线运动的方式经过3个路点
def example_movel(robot_name):
    # 计数变量
    cnt = 0

    # 关节角，单位: 弧度
    q0 = [-2.40194, 0.103747, 1.7804,
          0.108636, 1.57129, -2.6379]
    # 位姿，形式[x,y,z,rx,ry,rz]
    Waypoint_0_p = [-0.155944, -0.727344, 0.439066,
                    3.05165, 0.0324355, 1.80417]
    Waypoint_1_p = [-0.581143, -0.357548, 0.439066,
                    3.05165, 0.0324355, 1.80417]
    Waypoint_2_p = [0.503502, -0.420646, 0.439066,
                    3.05165, 0.0324355, 1.80417]

    # 以关节运动的方式运动到路点 q0
    robot_rpc_client.getRuntimeMachine().start()
    print("Moving to q0...")
    robot_rpc_client.getRobotInterface(robot_name).getMotionControl() \
        .moveJoint(q0, 180 * (M_PI / 180), 1000000 * (M_PI / 180), 0, 0)  # 接口调用: 关节运动
    waitArrival(robot_rpc_client.getRobotInterface(robot_name))

    # 循环5次: 以直线运动的方式依次走3个路点
    for i in range(5):
        # 以直线运动的方式运动到 Waypoint_0_p
        print("Moving to p0...")
        robot_rpc_client.getRobotInterface(robot_name).getMotionControl() \
            .moveLine(Waypoint_0_p, 250 * (M_PI / 180), 1000 * (M_PI / 180), 0, 0)  # 接口调用: 直线运动
        # 逆解 Waypoint_0_p，如果逆解失败，则停止程序执行
        while 1:
            cur = robot_rpc_client.getRobotInterface(robot_name) \
                .getRobotState().getJointPositions()  # 接口调用: 获取当前关节角
            inverse_result = robot_rpc_client.getRobotInterface(robot_name) \
                .getRobotAlgorithm().inverseKinematics(cur, Waypoint_0_p)  # 接口调用: 获得 Waypoint_0_p 的逆解结果
            if inverse_result[1] >= 0:
                inverse_value = inverse_result[0]  # 逆解 Waypoint_0_p 得到的关节角
                cnt = 0
                break
            cnt = cnt + 1
            if cnt > 10:
                os._exit()
        # 阻塞
        waitArrival(robot_rpc_client.getRobotInterface(robot_name))
        inverse_value.clear()

        # 以直线运动的方式运动到 Waypoint_1_p
        print("Moving to p1...")
        robot_rpc_client.getRobotInterface(robot_name).getMotionControl() \
            .moveLine(Waypoint_1_p, 250 * (M_PI / 180), 1000 * (M_PI / 180), 0, 0)  # 接口调用: 直线运动
        # 逆解 Waypoint_1_p，如果逆解失败，则停止程序执行
        while 1:
            cur = robot_rpc_client.getRobotInterface(robot_name) \
                .getRobotState().getJointPositions()  # 接口调用: 获取当前关节角
            inverse_result = robot_rpc_client.getRobotInterface(robot_name) \
                .getRobotAlgorithm().inverseKinematics(cur, Waypoint_1_p)  # 接口调用: 获得 Waypoint_1_p 的逆解结果
            if inverse_result[1] >= 0:
                inverse_value = inverse_result[0]  # 逆解 Waypoint_1_p 得到的关节角
                cnt = 0
                break
            cnt = cnt + 1
            if cnt > 10:
                os._exit()
        # 阻塞
        waitArrival(robot_rpc_client.getRobotInterface(robot_name))
        inverse_value.clear()

        # 以直线运动的方式运动到 Waypoint_2_p
        print("Moving to p2...")
        robot_rpc_client.getRobotInterface(robot_name).getMotionControl() \
            .moveLine(Waypoint_2_p, 250 * (M_PI / 180), 1000 * (M_PI / 180), 0, 0)  # 接口调用: 直线运动
        # 逆解 Waypoint_2_p，如果逆解失败，则停止程序执行
        while 1:
            cur = robot_rpc_client.getRobotInterface(robot_name) \
                .getRobotState().getJointPositions()  # 接口调用: 获取当前关节角
            inverse_result = robot_rpc_client.getRobotInterface(robot_name) \
                .getRobotAlgorithm().inverseKinematics(cur, Waypoint_2_p)  # 接口调用: 获得 Waypoint_2_p 的逆解结果
            if inverse_result[1] >= 0:
                inverse_value = inverse_result[0]  # 逆解 Waypoint_2_p 得到的关节角
                cnt = 0
                break
            cnt = cnt + 1
            if cnt > 10:
                os._exit()
        # 阻塞
        waitArrival(robot_rpc_client.getRobotInterface(robot_name))
        inverse_value.clear()
    robot_rpc_client.getRuntimeMachine().stop()

if __name__ == '__main__':
    robot_rpc_client.connect(robot_ip, robot_port)  # 接口调用: 连接 RPC 服务
    if robot_rpc_client.hasConnected():
        print("Robot rcp_client connected successfully!")
        robot_rpc_client.login("aubo", "123456")  # 接口调用: 机械臂登录
        if robot_rpc_client.hasLogined():
            print("Robot rcp_client logined successfully!")
            robot_name = robot_rpc_client.getRobotNames()[0]  # 接口调用: 获取机器人的名字
            example_movel(robot_name)  # 先关节运动起始位置，然后循环依次以直线运动的方式经过3个路点
