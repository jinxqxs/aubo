local aubo = require('aubo')
local sched = sched or aubo.sched
local math = aubo.math or math

local sleep = sched.sleep
local thread = sched.thread
local sync = sched.sync
local run = sched.run
local kill = sched.kill
local halt = sched.halt
function p_example_movej()
    setCollisionStopType(0)
    setCollisionLevel(6)
    setHomePosition({0,-0.2617993877991495,1.74532925199433,0.4363323129985824,1.570796326794897,0}    )
    modbusDeleteAllSignals()
    setDigitalInputActionDefault()
    setDigitalOutputRunstateDefault()
    setPayload(0, {0,0,0}, {0,0,0}, {0,0,0,0,0,0,0,0,0})
    setTcpOffset({0,0,0,0,0,0})
    Base = {0,0,0,0,0,0}
    Tool = {0,0,0,0,0,0}
    Plane_0 = {0.565972949689067,-0.113663895481406,0.270479282359898,-0.000275602873348593,0.000168325942622117,3.95638317211762e-05}

    function waitForMotionComplete()
        sched.sync_program_point()
    end

    function str_cat(str1, str2)
        return tostring(str1) .. tostring(str2)
    end

    local function calculate_point_to_move_towards(feature, direction, position_distance)
        local posDir={direction[1], direction[2], direction[3]}
        if (math.norm(posDir) < 1e-6) then
            return getTargetTcpPose()
        end
        local direction_vector_normalized=math.normalize(posDir)
        local displacement_pose={direction_vector_normalized[1] * position_distance,direction_vector_normalized[2] * position_distance,direction_vector_normalized[3] * position_distance,0,0,0}

        local wanted_displacement_in_base_frame=poseSub(poseTrans(feature, displacement_pose), feature)
        return poseAdd(getTargetTcpPose(), wanted_displacement_in_base_frame)
    end
    setPlanContext(sched.current_thread_id(), 1, "Program")
    while true do
        setPlanContext(sched.current_thread_id(), 2, "movej_test.lua")
        pi = 3.14159265358979323846
        q1 = {-0.93/180*pi, -15.77/180*pi, 97.57/180*pi, 23.33/180*pi, 89.99/180*pi, -1.82/180*pi}
        q2 = {-16.67/180*pi, -21.25/180*pi, 56.19/180*pi, -12.57/180*pi, 89.99/180*pi, -17.56/180*pi}
        q3 = {30.22/180*pi, -14.97/180*pi, 61.42/180*pi, -13.62/180*pi, 89.99/180*pi, 29.33/180*pi}
        moveJoint(q1, 1, 1, 0, 0)
        textmsg("joint move to waypoint1")
        moveJoint(q2, 1, 1, 0, 0)
        textmsg("joint move to waypoint2")
        moveJoint(q3, 1, 1, 0, 0)
        textmsg("joint move to waypoint3")
        sched.cancel_point()
    end
end

local app = {
  PRIORITY = 1000, -- set the app priority, which determines app execution order
  VERSION = "0.1",
  VENDOR = "Aubo Robotics",
}

function app:start_robot1(env)
  print("start_robot1--- ************"..tostring(env))
  -- 配置脚本环境
  local _ENV = env
  for k,v in pairs(self.api:loadf(1)) do _ENV[k] = v end
  p_example_movej()
end

function app:start(api)
  --
  self.api = api
  print("start---")
  self:start_robot1(_ENV)
end

function app:robot_error_handler(name, err)
  --
  print("An error hanppen to robot "..name)
end

-- return our app object
return app



