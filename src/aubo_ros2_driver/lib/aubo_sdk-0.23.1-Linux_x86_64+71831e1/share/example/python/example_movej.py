#! /usr/bin/env python
# coding=utf-8

"""
机械臂关节运动

步骤:
第一步: 连接到 RPC 服务
第二步: 机械臂登录
第三步: 以关节运动的方式依次经过3个路点
"""

import time
import numpy as np
import pyaubo_sdk

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

# 以关节运动的方式依次经过3个路点
def example_movej(robot_name):
    # 关节角，单位: 弧度
    q1 = [-2.05177, -0.400292, 1.19625, 0.0285152, 1.57033, -2.28774]
    q2 = [-0.236948, -0.465633, 1.1002, -0.00600456, 1.56824, -0.472864]
    q3 = [1.38167, -0.0115091, 1.66958, 0.107726, 1.572, 1.14576]

    # 关节运动到路点 q1
    robot_rpc_client.getRuntimeMachine().start()
    print("Moving to q1...")
    robot_rpc_client.getRobotInterface(robot_name).getMotionControl() \
        .moveJoint(q1, 180 * (M_PI / 180), 1000000 * (M_PI / 180), 0, 0)  # 接口调用: 关节运动
    waitArrival(robot_rpc_client.getRobotInterface(robot_name))  # 阻塞

    # 关节运动到路点 q2
    print("Moving to q2...")
    robot_rpc_client.getRobotInterface(robot_name).getMotionControl() \
        .moveJoint(q2, 180 * (M_PI / 180), 1000000 * (M_PI / 180), 0, 0)  # 接口调用: 关节运动
    waitArrival(robot_rpc_client.getRobotInterface(robot_name))  # 阻塞

    # 关节运动到路点 q3
    print("Moving to q3...")
    robot_rpc_client.getRobotInterface(robot_name).getMotionControl() \
        .moveJoint(q3, 180 * (M_PI / 180), 1000000 * (M_PI / 180), 0, 0)  # 接口调用: 关节运动
    waitArrival(robot_rpc_client.getRobotInterface(robot_name))  # 阻塞

    robot_rpc_client.getRuntimeMachine().stop()

if __name__ == '__main__':
    robot_rpc_client.connect(robot_ip, robot_port)  # 接口调用: 连接 RPC 服务
    if robot_rpc_client.hasConnected():
        print("Robot rcp_client connected successfully!")
        robot_rpc_client.login("aubo", "123456")  # 接口调用: 机械臂登录
        if robot_rpc_client.hasLogined():
            print("Robot rcp_client logined successfully!")
            robot_name = robot_rpc_client.getRobotNames()[0]  # 接口调用: 获取机器人的名字
            example_movej(robot_name)  # 以关节运动的方式依次经过3个路点
