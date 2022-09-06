#include "ros/ros.h"
#include "plumbing_pub_sub/Person.h"
/* 
    发布方：发布人的消息
        1.包含头文件
        2.初始化ROS节点
        3.创建节点句柄
        4.创建发布者对象
        5.编写发布逻辑，发布数据
 */

int main(int argc, char* argv[]){
    setlocale(LC_ALL,"");
    //2.初始化ROS节点
    ros::init(argc,argv,"banZhuRen");
    //3.创建节点句柄
    ros::NodeHandle nh;
    //4.创建发布者对象
    ros::Publisher pub = nh.advertise<plumbing_pub_sub::Person>("liaoTian",10);
    return 0;
}