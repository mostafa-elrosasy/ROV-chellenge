#include <QCoreApplication>
#include "ros.h"
#include "msg.h"
#include "topic.h"
#include <QDebug>
#include <QTimer>

void call(srv_resp_I *t){
    test_srv_resp *a = (test_srv_resp *)t;
    qDebug() << QString::fromStdString(a->output) ;
}
int main(int argc, char *argv[]){
    QCoreApplication a(argc, argv);

    QRos ros("127.0.0.1",8009);
//    Topic t ("Time", new std_String("Time now is"));
//    ros.publish(t);
    Service s("test", new test_srv("testReqParm"));
    ros.send_request(&s,call);
    return a.exec();
}