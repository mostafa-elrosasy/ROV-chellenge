#include "msg.h"

std_String::std_String(std::string data):data(data){
}

std::string std_String::encode(){
    return "{\"String\" : \"" + data + "\"}";
}

std::string std_String::get_Type(){
    return "std_msgs/String";
}
// **************************************************************************
std_Empty::std_Empty(){
}

std::string std_Empty::encode(){
    return "{\"Data\" : \"Empty\"}";
}

std::string std_Empty::get_Type(){
    return "std_msgs/Empty";
}
// **************************************************************************
pln_motion::pln_motion(double x, double y):x_speed(x),y_speed(y){

}

std::string pln_motion::encode(){
    return "{\"x_speed\" : "+std::to_string(x_speed)+", \"y_speed\" : "+std::to_string(y_speed)+"}";
}

std::string pln_motion::get_Type(){
    return "rov20/pln_motion";
}
// **************************************************************************
z_motion::z_motion(double z):z_speed(z){

}

std::string z_motion::encode(){
    return "{\"z_speed\" : "+std::to_string(z_speed)+"}";
}

std::string z_motion::get_Type(){
    return "rov20/z_motion";
}
// **************************************************************************
raw_data::raw_data(int x, int y, int z):z_speed(z),x_speed(x),y_speed(y){
}

std::string raw_data::encode(){
    return "{\"x_speed\" : "+std::to_string(x_speed)+", \"y_speed\" : "+std::to_string(y_speed)+", \"z_speed\" : "+std::to_string(z_speed)+"}";
}

std::string raw_data::get_Type(){
    return "rov20/raw_data";
}


/*planner a (50,60);
ros.publish(a)

topicName,"planne",call

call(msg_I m){
    planner *a = (planner *)m;
}
*/

// **************************************************************************
camera_msg::camera_msg(int ind, std::string act, int x_angle, int y_angle):index(ind),action(act),x(x_angle),y(y_angle){
}

std::string camera_msg::encode(){
    return "{\"index\" : "+std::to_string(index) + ", \"action\" : \""+action + "\", \"x\" : "
            + std::to_string(x) + ", \"y\" : "+std::to_string(y) + "}";
}

std::string camera_msg::get_Type(){
    return "rov20/camera";
}
// **************************************************************************
