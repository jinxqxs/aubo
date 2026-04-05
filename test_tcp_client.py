import tcp_sender
import time

SERVER_IP = "192.168.243.133" # 改成接收端的IP，如果是本机测试用 "127.0.0.1"
SERVER_PORT = 8888

print("测试网络发送...")

# 1. 连接
if tcp_sender.connect_server(SERVER_IP, SERVER_PORT):
    print("连接成功，开始发送测试数据 (按 Ctrl+C 停止)...")
    
    try:
        # 循环发送假数据
        i = 0
        while True:
            # 生成一个慢慢移动的假坐标
            fake_robot_coord = [0.4,0.0,0.3]
            # 发送
            if tcp_sender.send_data(fake_robot_coord):
                print(f"发送: {fake_robot_coord}")
            else:
                print("发送失败，连接可能断开")
                break
                
            time.sleep(1) # 每秒发一次
            i += 1
            
    except KeyboardInterrupt:
        print("停止发送")
    finally:
        tcp_sender.close()
else:
    print("连接失败！请检查:")
    print("  1. IP地址是否正确")
    print("  2. test_tcp_server.py 是否正在运行")
    print("  3. 防火墙是否关闭")