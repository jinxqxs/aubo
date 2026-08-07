import socket

# 全局Socket对象
_sock = None
_is_connected = False

def connect_server(ip, port):
    """
    连接到TCP服务器
    """
    global _sock, _is_connected
    
    try:
        _sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        _sock.settimeout(2.0)
        _sock.connect((ip, port))
        _is_connected = True
        print(f"[Sender] 成功连接到 {ip}:{port}")
        return True
    except Exception as e:
        print(f"[Sender] 连接失败: {e}")
        _is_connected = False
        return False

def send_data(data_xyz):
    """
    发送坐标数据
    :param data_xyz: [X, Y, Z]
    """
    global _sock, _is_connected
    
    if not _is_connected:
        return False
        
    try:
        # 格式化字符串: X,Y,Z\n
        msg = f"{data_xyz[0]:.4f},{data_xyz[1]:.4f},{data_xyz[2]:.4f}\n"
        _sock.sendall(msg.encode('utf-8'))
        return True
    except Exception as e:
        print(f"[Sender] 发送异常: {e}")
        _is_connected = False
        return False

def close():
    if _sock:
        _sock.close()