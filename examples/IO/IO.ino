#include <NHNano.h>

void setup(){
    Serial.begin(115200);
}

void loop(){
    sserial("A0: %d | ", analog(A0));
    sserial("A1: %d | ", analog(A1));
    sserial("A2: %d | ", analog(A2));
    sserial("A3: %d | ", analog(A3));
    sserial("A4: %d | ", analog(A4));
    sserial("A5: %d | ", analog(A5));
    sserial("A6: %d | ", analog(A6));
    sserial("A7: %d\n", analog(A7));

    delay(100);
}