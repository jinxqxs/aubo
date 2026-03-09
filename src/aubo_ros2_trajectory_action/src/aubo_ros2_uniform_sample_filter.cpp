// Copyright 2023 Xie Shaosong
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// https://github.com/ros-industrial/industrial_core/blob/melodic-devel/industrial_trajectory_filters/src/uniform_sample_filter.cpp
// Optimization of the uniform_sample_filter in ROS-Industrial for ROS2

#include "aubo_ros2_trajectory_action.h"

using namespace aubo_ros2_trajectory_action;

UniformSampleFilter::UniformSampleFilter()
{
  sample_duration_ = DEFAULT_SAMPLE_DURATION;
  std::cout << "UniformSampleFilter Ready" << std::endl;
}

double UniformSampleFilter::toSec(const builtin_interfaces::msg::Duration &duration)
{
  return (double)duration.sec + 1e-9 * (double)duration.nanosec;
}

builtin_interfaces::msg::Duration UniformSampleFilter::toDuration(double time_in_seconds)
{
  builtin_interfaces::msg::Duration duration;

  duration.sec = static_cast<int32_t>(time_in_seconds);
  duration.nanosec = static_cast<uint32_t>((time_in_seconds - duration.sec) * 1e9);

  return duration;
}

void UniformSampleFilter::configure(const double &sample_duration)
{
  sample_duration_ = sample_duration;
}

bool UniformSampleFilter::update(const trajectory_msgs::msg::JointTrajectory &in, trajectory_msgs::msg::JointTrajectory &out)
{
  bool success = false;
  size_t size_in = in.points.size();
  double duration_in = toSec(in.points.back().time_from_start);
  double interpolated_time = 0.0;
  size_t index_in = 0;

  trajectory_msgs::msg::JointTrajectoryPoint p1, p2, interp_pt;

  out = in;

  out.points.clear();

  while (interpolated_time < duration_in)
  {
    while (interpolated_time > toSec(in.points[index_in + 1].time_from_start))
    {
      index_in++;

      if (index_in > size_in)
      {
        return false;
      }
    }

    p1 = in.points[index_in];
    p2 = in.points[index_in + 1];

    if (!interpolatePt(p1, p2, interpolated_time, interp_pt))
    {
      return false;
    }
    out.points.push_back(interp_pt);
    interpolated_time += sample_duration_;
  }

  p2 = in.points.back();
  p2.time_from_start = toDuration(interpolated_time);

  out.points.push_back(p2);

  success = true;
  return success;
}

bool UniformSampleFilter::interpolatePt(trajectory_msgs::msg::JointTrajectoryPoint &p1, trajectory_msgs::msg::JointTrajectoryPoint &p2,
                                        double time_from_start, trajectory_msgs::msg::JointTrajectoryPoint &interp_pt)
{
  bool ret = false;
  double p1_time_from_start = toSec(p1.time_from_start);
  double p2_time_from_start = toSec(p2.time_from_start);

  if (time_from_start >= p1_time_from_start && time_from_start <= p2_time_from_start)
  {
    if (p1.positions.size() == p1.velocities.size() && p1.positions.size() == p1.accelerations.size())
    {
      if (p1.positions.size() == p2.positions.size() && p1.velocities.size() == p2.velocities.size() && p1.accelerations.size() == p2.accelerations.size())
      {
        interp_pt = p1;
        KDL::VelocityProfile_Spline spline_calc;

        for (size_t i = 0; i < p1.positions.size(); ++i)
        {
          double time_from_p1 = time_from_start - toSec(p1.time_from_start);
          double time_from_p1_to_p2 = p2_time_from_start - p1_time_from_start;

          spline_calc.SetProfileDuration(p1.positions[i], p1.velocities[i], p1.accelerations[i], p2.positions[i],
                                         p2.velocities[i], p2.accelerations[i], time_from_p1_to_p2);

          builtin_interfaces::msg::Duration time_from_start_dur = toDuration(time_from_start);

          interp_pt.time_from_start = time_from_start_dur;
          interp_pt.positions[i] = spline_calc.Pos(time_from_p1);
          interp_pt.velocities[i] = spline_calc.Vel(time_from_p1);
          interp_pt.accelerations[i] = spline_calc.Acc(time_from_p1);
        }
        ret = true;
      }
      else
      {
        ret = false;
      }
    }
    else
    {
      ret = false;
    }
  }
  else
  {
    ret = false;
  }

  return ret;
}
