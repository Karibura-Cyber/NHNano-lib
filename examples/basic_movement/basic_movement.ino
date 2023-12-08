#include <NHNano.h>

void setup(){
    setupMotor();
}

void loop(){
    fd(100); sleep(2000);                       //Forward
    ao(); sleep(1000);                          //Stop
    bk(100); sleep(2000);                       //Backward
    ao(); sleep(1000);                          //Stop
    sl(100); sleep(1000);                       //Spin left
    ao(); sleep(1000);                          //Stop
    sr(100); sleep(1000);                       //Spin right
    ao(); sleep(1000);                          //Stop
    tl(100); sleep(1000);                       //Turn left
    ao(); sleep(1000);                          //Stop
    tr(100); sleep(1000);                       //Turn right
}