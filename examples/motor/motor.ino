#include <NHNano.h>

void setup(){
    setupMotor();
}

void loop(){
    for(int i = 0; i <= 100; i++){
        motor(1, i); motor(2, i); sleep(100);
    }
}