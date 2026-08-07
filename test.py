import socket

# 监听所有网卡，端口8888
HOST = '0.0.0.0' 
PORT = 8888

print(f"启动测试服务器...")
print(f"正在监听端口: {PORT}")
print(f"请在另一个终端运行 test_tcp_client.py")

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.bind((HOST, PORT))
    s.listen()
    while True:
        conn, addr = s.accept()
        with conn:
            print(f"✓ 已连接: {addr}")

            data = conn.recv(1024)
            if not data:
                break
            msg = data.decode('utf-8').strip()
            print(f"收到数据: {msg}")
            
            x, y, z = msg.split(',')
            print(f"  解析: X={x}, Y={y}, Z={z}")

            
            
            
# # 1. 抓取刚刚恢复的 WSL 真实 IP
# $wsl_ip = (wsl -- bash -c "hostname -I" | Out-String).Trim().Split(" ")[0]

# # 2. 清理之前的错误映射
# netsh interface portproxy delete v4tov4 listenport=8888 listenaddress=0.0.0.0 | Out-Null
# Remove-NetFirewallRule -DisplayName "WSL TCP 8888" -ErrorAction SilentlyContinue | Out-Null

# # 3. 建立正确的映射（Windows 8888 -> 真实的 WSL 8888）
# netsh interface portproxy add v4tov4 listenport=8888 listenaddress=0.0.0.0 connectport=8888 connectaddress=$wsl_ip

# # 4. 放行防火墙
# New-NetFirewallRule -DisplayName "WSL TCP 8888" -Direction Inbound -Action Allow -Protocol TCP -LocalPort 8888 -Profile Any | Out-Null

# Write-Host "✅ 映射成功！已成功转发到 WSL 的真实 IP: $wsl_ip" -ForegroundColor Green


# # 1. 删除 8888 端口的转发映射规则
# netsh interface portproxy delete v4tov4 listenport=8888 listenaddress=0.0.0.0

# # 2. 删除之前为 WSL 添加的 8888 端口防火墙放行规则
# Remove-NetFirewallRule -DisplayName "WSL TCP 8888" -ErrorAction SilentlyContinue

# Write-Host "✅ 恢复成功！已清理端口映射与防火墙规则，系统的 8888 端口已重新对外关闭。" -ForegroundColor Green