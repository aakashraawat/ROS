#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>

int main(int argc, char **argv) {
  // Initialize ROS
  ros::init(argc, argv, "rosbot_node");

  // Create an instance of the RosbotClass
  RosbotClass rosbot;

  // Move the robot forward for 3 seconds
  rosbot.move_forward(3);

  // Get laser readings
  float right = rosbot.get_laser(121);
  float left = rosbot.get_laser(431);
  
  // Create an array to store the laser readings
  float array_laser[] = {left, right};
  
  // Print the laser readings
  ROS_INFO_STREAM("The wall is at " << array_laser[0] << " meters to the left, and at " << array_laser[1] << " meters to the right from the robot ");
  
  return 0;
}
