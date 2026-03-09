#! /usr/bin/env python
# coding=utf-8

"""
机械臂欧拉角与四元数转换

步骤:
第一步: 连接到 RPC 服务
第二步: 机械臂登录
第三步: 欧拉角转四元数
第四步: 四元数转欧拉角
"""

import pyaubo_sdk

robot_ip = "127.0.0.1"  # 服务器 IP 地址
robot_port = 30004  # 端口号
M_PI = 3.14159265358979323846
robot_rpc_client = pyaubo_sdk.RpcClient()

# 欧拉角转四元数
def exampleRpyToQuat():
    print("欧拉角转四元数")
    # 欧拉角
    rpy = [0.611, 0.785, 0.960]
    # 接口调用: 欧拉角转四元数
    quat = robot_rpc_client.getMath().rpyToQuaternion(rpy)
    print("四元数:", quat)

# 四元数转欧拉角
def exampleQuatToRpy():
    print("四元数转欧拉角")
    # 四元数
    quat = [0.834721517970497, 0.07804256900772265, 0.4518931575790371, 0.3048637712043723]
    # 接口调用: 四元数转欧拉角
    rpy = robot_rpc_client.getMath().quaternionToRpy(quat)
    print("欧拉角:", rpy)
    pass


if __name__ == '__main__':
    robot_rpc_client.connect(robot_ip, robot_port)  # 接口调用: 连接 RPC 服务
    if robot_rpc_client.hasConnected():
        print("Robot rcp_client connected successfully!")
        robot_rpc_client.login("aubo", "123456")  # 接口调用: 机械臂登录
        if robot_rpc_client.hasLogined():
            print("Robot rcp_client logined successfully!")
            exampleRpyToQuat()  # 欧拉角转四元数
            exampleQuatToRpy()  # 四元数转欧拉角