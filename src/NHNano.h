#ifndef NHNano_h
#define NHNano_h
#include "Arduino.h"

void sserial(const char *format, ...);
void sleep(int duration);

//---- Motor functions ----//
void setupMotor();
void motor(int motorPin, int speed);
void fd(int speed);
void bk(int speed);
void sl(int speed);
void sr(int speed);
void tl(int speed);
void tr(int speed);
void ao();
//--------------------------//


//---- Servo functions ----//
// void servo(int pin, int angle);
//-------------------------//

//---- IO functions ----//
int analog(int pin);
int digital(int pin);
//----------------------//

#endif
