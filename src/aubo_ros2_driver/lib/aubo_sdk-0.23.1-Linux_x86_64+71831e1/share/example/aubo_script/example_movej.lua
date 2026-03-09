--[[
    功能：关节运动
    描述：以关节运动的方式依次经过3个路点
]]
local aubo = require('aubo')
local sched = sched or aubo.sched
local math = aubo.math or math

local sleep = sched.sleep
local thread = sched.thread
local sync = sched.sync
local run = sched.run
local kill = sched.kill
function p_example_movej()
    -- 功能：恢复所有数字输入、数字输出为默认值
    setDigitalInputActionDefault()
    setDigitalOutputRunstateDefault()
    
    -- 功能：设置末端负载、TCP
    setPayload(0, {0,0,0}, {0,0,0}, {0,0,0,0,0,0})
    setTcpOffset({0.0000,0.0000,0.0000,0,0,0})
    Base = {0,0,0,0,0,0}
    Tool = {0,0,0,0,0,0}
    
    pi = 3.14159265358979323846
    -- 关节角，单位：弧度
    Waypoint_1_q = {-0.93/180*pi, -15.77/180*pi, 97.57/180*pi, 23.33/180*pi, 89.99/180*pi, -1.82/180*pi}
    Waypoint_2_q = {-16.67/180*pi, -21.25/180*pi, 56.19/180*pi, -12.57/180*pi, 89.99/180*pi, -17.56/180*pi}
    Waypoint_3_q = {30.22/180*pi, -14.97/180*pi, 61.42/180*pi, -13.62/180*pi, 89.99/180*pi, 29.33/180*pi}

    -- 以关节运动的方式依次经过3个路点：Waypoint_1、Waypoint_2和Waypoint_3
    -- 对应AUBOPE move_joint(q,false)
    moveJoint(Waypoint_1_q, 1, 1, 0, 0)
    
    -- 分别打印日志到aubo_control.log和示教器Log界面
    setPlanContext(0, 36, "Move joint")  
    setPlanContext(0, 37, "Waypoint_1_q")
    textmsg("joint move to waypoint_1")

    moveJoint(Waypoint_2_q, 1, 1, 0, 0)
    setPlanContext(0, 41, "Waypoint_2_q")
    textmsg("joint move to waypoint_2")

    moveJoint(Waypoint_3_q, 1, 1, 0, 0)
    setPlanContext(0, 45, "Waypoint_3_q")
    textmsg("joint move to waypoint_3")

    setPlanContext(0, 48, "Waypoint_from_1 Waypoint_to_1")
    Waypoint_from_1_p={0,0,0,0,0,0}
    Waypoint_to_1_p={-0.2,0,0,0,0,0}
    -- 对应AUBOPE 对应AUBOPE set_relative_offset({-0.2, 0, 0}, {0.000000, 0.000000, 0.000000}, {1.000000, 0.000000, 0.000000, 0.000000})
    posetem=poseAdd(getTargetTcpPose(), poseSub(Waypoint_to_1_p, Waypoint_from_1_p))
    textmsg("posetem is "..table.concat(posetem, ', '))
    moveJoint(inverseKinematics(Waypoint_3_q,posetem ), 1, 1, 0, 0)

end

local plugin = {
  PRIORITY = 1000, -- set the plugin priority, which determines plugin execution order
  VERSION = "0.1",
  VENDOR = "Aubo Robotics",
}

function plugin:start_robot1(env)
  print("start_robot1---")
  -- 配置脚本环境
  local _ENV = env
  for k,v in pairs(self.api:loadf(1)) do _ENV[k] = v end
  p_example_movej()
end

function plugin:start(api)
  --
  self.api = api
  print("start---")
  self:start_robot1(_ENV)
end

function plugin:robot_error_handler(name, err)
  --
  print("An error hanppen to robot "..name)
end

-- return our plugin object
return plugin
