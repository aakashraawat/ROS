#include "rosbot_control/rosbot_class.h"
#include <iostream>
#include <ros/ros.h>

using namespace std;

int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  RosbotClass rosbot;
  rosbot.move();

  float x_0 = rosbot.get_position(1);
  double t_0 = rosbot.get_time();

  rosbot.move();

  float x_1 = rosbot.get_position(1);
  double t_1 = rosbot.get_time();

  float speed = (x_1 - x_0)/(t_1 - t_0); 
  ROS_INFO_STREAM("Speed is lower than 1 m/s? " << (speed<=1.0) << "\n");


  return 0;
}
