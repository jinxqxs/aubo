/** @file axes.h
 *  @brief 外部轴接口
 */
#ifndef AUBO_SDK_AXES_INTERFACE_H
#define AUBO_SDK_AXES_INTERFACE_H

#include <aubo/sync_move.h>
#include <aubo/trace.h>

namespace arcs {
namespace common_interface {

enum class AxesModeType : int
{
    Disconnected,   ///< 未连接
    PowerOff,       ///< 断电
    BrakeReleasing, ///< 刹车松开中
    Idle,           ///< 空闲
    Running,        ///< 运行中
    Fault           ///< 错误状态
};

class ARCS_ABI_EXPORT AxesControl
{
public:
    AxesControl();
    virtual ~AxesControl();

    /**
     * 通电
     *
     * @return
     */
    int poweronExt();

    /**
     * 断电
     *
     * @return
     */
    int poweroffExt();

    /**
     * 使能
     *
     * @return
     */
    int enableExt();

    /**
     * 设置外部轴的安装位姿(相对于世界坐标系)
     *
     * @param pose
     * @return
     */
    int setExtMountingPose(const std::vector<double> &pose);

    /**
     * 运动到指定点， 旋转或者平移
     *
     * @param pos
     * @param v
     * @param a
     * @param duration
     * @param blend_radius
     * @return
     */
    int moveExtJoint(double pos, double v, double a, double duration,
                     double blend_radius);

    /**
     * 制定目标运动速度
     *
     * @param v
     * @param a
     * @param duration
     * @param blend_radius
     * @return
     */
    int speedExtJoint(double v, double a, double duration, double blend_radius);

    /**
     * 获取当前外部轴的状态
     *
     * @return 当前外部轴的状态
     */
    AxesModeType getAxesModeType();

    /**
     * 获取外部轴安装位姿
     *
     * @return 外部轴安装位姿
     */
    std::vector<double> getExtMountingPose();

    /**
     * 获取相对于安装坐标系的位姿，外部轴可能为变位机或者导轨
     *
     * @return 相对于安装坐标系的位姿
     */
    std::vector<double> getExtPose();

    /**
     * 获取外部轴位置
     *
     * @return 外部轴位置
     */
    double getExtPosition();

    /**
     * 获取外部轴运行速度
     *
     * @return 外部轴运行速度
     */
    double getExtVelocity();

    /**
     * 获取外部轴运行加速度
     *
     * @return 外部轴运行加速度
     */
    double getExtAcceleration();

    /**
     * 获取外部轴电流
     *
     * @return 外部轴电流
     */
    double getExtCurrent();

    /**
     * 获取外部轴温度
     *
     * @return 外部轴温度
     */
    double getExtTemperature();

    /**
     * 获取外部轴电压
     *
     * @return 外部轴电压
     */
    double getExtBusVoltage();

    /**
     * 获取外部轴电流
     *
     * @return 外部轴电流
     */
    double getExtBusCurrent();

    /**
     * 获取外部轴最大位置
     *
     * @return 外部轴最大位置
     */
    double getExtMaxPosition();

    /**
     * 获取外部轴最小位置
     *
     * @return 外部轴最小位置
     */
    double getExtMinPosition();

    /**
     * 获取外部轴最大速度
     *
     * @return 外部轴最大速度
     */
    double getExtMaxVelocity();

    /**
     * 获取外部轴最大加速度
     *
     * @return 外部轴最大加速度
     */
    double getExtMaxAcceleration();
};
using AxesControlPtr = std::shared_ptr<AxesControl>;

/**
 * 外部轴API接口
 */
class ARCS_ABI_EXPORT AxesInterface
{
public:
    AxesInterface();
    virtual ~AxesInterface();

    /**
     * 获取同步运动接口
     *
     * @return SyncMovePtr对象的指针
     */
    SyncMovePtr getSyncMove();

    /**
     * 获取告警信息接口
     *
     * @return TracePtr对象的指针
     */
    TracePtr getTrace();

    /**
     * 获取外部轴控制接口
     *
     * @return AxesControlPtr对象的指针
     */
    AxesControlPtr getAxesControl();
};
using AxesInterfacePtr = std::shared_ptr<AxesInterface>;

} // namespace common_interface
} // namespace arcs

#endif // AUBO_SDK_ROBOT_INTERFACE_H
