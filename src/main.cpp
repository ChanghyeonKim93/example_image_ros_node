#include <ros/ros.h>

#include <iostream>
#include <string>

#include "wheelchair_nav_ros.h"

int main(int argc, char **argv) {
    ros::init(argc, argv, "wheelchair_nav_node");
    ros::NodeHandle nh("~");
    ROS_INFO_STREAM("START: \"wheelchair_nav_node node\".\n");
    
    WheelchairNavROS wcros(nh);
 
    ROS_INFO_STREAM("wheelchair_nav_node - TERMINATE.");
    return -1;
}