#include "rosbot_control/rosbot_class.h"
#include <list>
#include <ros/ros.h>
#include <string>
using namespace std;

string trajectory(RosbotClass rosbot) {
  rosbot.turn("clockwise", 3);
  cout << "Turn completed " << endl;
  rosbot.move_forward(2.0);
  cout << "Move completed" << endl;
  rosbot.turn("counterclockwise", 3);
  cout << "Turn completed" << endl;
  rosbot.move_forward(10.0);
  rosbot.turn("clockwise", 2);
  rosbot.move_forward(3.0);

  string message = "Trajectory was succesful!!";
  return message;
}

int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  RosbotClass rosbot;

  string m = trajectory(rosbot);// calls the function 
  cout << m << endl;

  return 0;
}
