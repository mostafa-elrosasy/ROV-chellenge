#ifndef SRV_RSP_H
#define SRV_RSP_H

#include <string>

class srv_I{
public:
    virtual std::string encode(){
        return "";
    }
    virtual ~srv_I(){}
};

class srv_resp_I{
};

class test_srv_resp :public srv_resp_I{
public:
    test_srv_resp(std::string);
    std::string output;
};

class test_srv : public srv_I{
//        type : srv/Test
//        data : req :req (var name in json file)
//               res :res (var name in json file)
public:
    test_srv(std::string req);
    std::string encode();
    std::string req;
};

class lights_srv_resp :public srv_resp_I{
public:
    lights_srv_resp(std::string);
    std::string response;
};

class lights_srv : public srv_I{
//        type : srv/lights
//        data : req :command (var name in json file)
//               res :response (var name in json file)
public:
    lights_srv(std::string command);
    std::string encode();
    std::string command;
};

#endif // SRV_RSP_H
