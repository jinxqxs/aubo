/** @file aubo_api.h
 *  @brief 机器人及外部轴等控制API接口，如获取机器人列表、获取系统信息等等
 */
#ifndef AUBO_SDK_AUBO_API_INTERFACE_H
#define AUBO_SDK_AUBO_API_INTERFACE_H

#include <aubo/system_info.h>
#include <aubo/runtime_machine.h>
#include <aubo/register_control.h>
#include <aubo/robot_interface.h>
#include <aubo/global_config.h>
#include <aubo/math.h>
#include <aubo/socket.h>
#include <aubo/serial.h>

namespace arcs {
namespace common_interface {

class ARCS_ABI_EXPORT AuboApi
{
public:
    AuboApi();
    virtual ~AuboApi();

    /**
     * 获取纯数学相关接口
     *
     * @return MathPtr对象的指针
     *
     * @par Python函数原型
     * getMath(self: pyaubo_sdk.AuboApi) -> pyaubo_sdk.Math
     *
     * @par C++示例
     * @code
     * auto rpc_cli = std::make_shared<RpcClient>();
     * MathPtr ptr = rpc_cli->getMath();
     * @endcode
     *
     */
    MathPtr getMath();

    /**
     * 获取系统信息
     *
     * @return SystemInfoPtr对象的指针
     *
     * @par Python函数原型
     * getSystemInfo(self: pyaubo_sdk.AuboApi) -> pyaubo_sdk.SystemInfo
     *
     * @par C++示例
     * @code
     * auto rpc_cli = std::make_shared<RpcClient>();
     * SystemInfoPtr ptr = rpc_cli->getSystemInfo();
     * @endcode
     *
     */
    SystemInfoPtr getSystemInfo();

    /**
     * 获取运行时接口
     *
     * @return RuntimeMachinePtr对象的指针
     *
     * @par Python函数原型
     * getRuntimeMachine(self: pyaubo_sdk.AuboApi) -> pyaubo_sdk.RuntimeMachine
     *
     * @par C++示例
     * @code
     * auto rpc_cli = std::make_shared<RpcClient>();
     * RuntimeMachinePtr ptr = rpc_cli->getRuntimeMachine();
     * @endcode
     *
     */
    RuntimeMachinePtr getRuntimeMachine();

    /**
     * 对外寄存器接口
     *
     * @return RegisterControlPtr对象的指针
     *
     * @par Python函数原型
     * getRegisterControl(self: pyaubo_sdk.AuboApi) ->
     * pyaubo_sdk.RegisterControl
     *
     * @par C++示例
     * @code
     * auto rpc_cli = std::make_shared<RpcClient>();
     * RegisterControlPtr ptr = rpc_cli->getRegisterControl();
     * @endcode
     *
     */
    RegisterControlPtr getRegisterControl();

    /**
     * 获取机器人列表
     *
     * @return 机器人列表
     *
     * @par Python函数原型
     * getRobotNames(self: pyaubo_sdk.AuboApi) -> List[str]
     *
     * @par C++示例
     * @code
     * auto rpc_cli = std::make_shared<RpcClient>();
     * auto robot_name = rpc_cli->getRobotNames().front();
     * @endcode
     *
     * @par JSON-RPC请求示例
     * {"jsonrpc":"2.0","method":"getRobotNames","params":[],"id":1}
     *
     * @par JSON-RPC响应示例
     * {"id":1,"jsonrpc":"2.0","result":["rob1"]}
     *
     */
    std::vector<std::string> getRobotNames();

    /**
     * 根据名字获取 RobotInterfacePtr 接口
     *
     * @param name 机器人名字
     * @return RobotInterfacePtr对象的指针
     *
     * @par Python函数原型
     * getRobotInterface(self: pyaubo_sdk.AuboApi, arg0: str) ->
     * pyaubo_sdk.RobotInterface
     *
     * @par C++示例
     * @code
     * auto rpc_cli = std::make_shared<RpcClient>();
     * auto robot_name = rpc_cli->getRobotNames().front();
     * RobotInterfacePtr ptr = rpc_cli->getRobotInterface(robot_name);
     * @endcode
     *
     */
    RobotInterfacePtr getRobotInterface(const std::string &name);

    /// 获取外部轴接口

    /// 获取独立 IO 模块接口

    /**
     *  获取 socket
     * @return SocketPtr对象的指针
     *
     * @par Python函数原型
     * getSocket(self: pyaubo_sdk.AuboApi) -> arcs::common_interface::Socket
     * @endcode
     *
     * @par C++示例
     * @code
     * auto rpc_cli = std::make_shared<RpcClient>();
     * SocketPtr ptr = rpc_cli->getSocket();
     * @endcode
     *
     */
    SocketPtr getSocket();

    /**
     *
     * @return SerialPtr对象的指针
     *
     * @par Python函数原型
     * getSerial(self: pyaubo_sdk.AuboApi) -> arcs::common_interface::Serial
     *
     * @par C++示例
     * @code
     * auto rpc_cli = std::make_shared<RpcClient>();
     * SerialPtr ptr = rpc_cli->getSerial();
     * @endcode
     */
    SerialPtr getSerial();

protected:
    void *d_{ nullptr };
};
using AuboApiPtr = std::shared_ptr<AuboApi>;

// clang-format off
#define AuboApi_DECLARES                       \
    _FUNC(AuboApi, 0, getMath)                 \
    _FUNC(AuboApi, 0, getSystemInfo)           \
    _FUNC(AuboApi, 0, getRuntimeMachine)       \
    _FUNC(AuboApi, 0, getRegisterControl)      \
    _FUNC(AuboApi, 0, getRobotNames)           \
    _FUNC(AuboApi, 1, getRobotInterface, name) \
    _FUNC(AuboApi, 0, getSocket)               \
    _FUNC(AuboApi, 0, getSerial)
// clang-format on

} // namespace common_interface
} // namespace arcs

#endif // AUBO_SDK_AUBO_API_H
