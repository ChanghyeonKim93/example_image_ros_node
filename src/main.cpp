#include <ros/ros.h>

#include <iostream>
#include <string>

#include "image_node_ros.h"

int main(int argc, char **argv) {
    ros::init(argc, argv, "image_node_ros");
    ros::NodeHandle nh("~");
    ROS_INFO_STREAM("START: \"image_node_ros node\".\n");
    
    ImageNodeROS img_node_ros(nh);
 
    ROS_INFO_STREAM("image_node_ros - TERMINATE.");
    return -1;
}