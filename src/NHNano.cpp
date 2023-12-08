#include "NHNano.h"

#define MOT_A1_PIN 10
#define MOT_A2_PIN 9
#define MOT_B1_PIN 6
#define MOT_B2_PIN 5
#define LED_BUILTIN 13

void sserial(const char *format, ...) //Print serial in multiple value
{
  char buffer[1024];
  va_list args;
  va_start(args, format);
  vsnprintf(buffer, sizeof(buffer), format, args);
  Serial.print(buffer);
  va_end(args);
}

int analog(int pin) { return analogRead(pin); } //Get analog data from pin
int digital(int pin) { return digitalRead(pin); } //Get digital data from pin
void sleep(int duration){delay(duration);} //Time duration

void setupMotor() //Setup motor for use motor
{
  pinMode(MOT_A1_PIN, OUTPUT);
  pinMode(MOT_A2_PIN, OUTPUT);
  pinMode(MOT_B1_PIN, OUTPUT);
  pinMode(MOT_B2_PIN, OUTPUT);

  digitalWrite(MOT_A1_PIN, LOW);
  digitalWrite(MOT_A2_PIN, LOW);
  digitalWrite(MOT_B1_PIN, LOW);
  digitalWrite(MOT_B2_PIN, LOW);
}

void motor(int motorPin, int speed) //Control motor
{
  int pwmValue = map(abs(speed), 0, 100, 0, 1023);
  if (speed >= 0)
  {
    if (motorPin == 1)
    {
      analogWrite(MOT_A1_PIN, pwmValue);
      analogWrite(MOT_A2_PIN, 0);
    }
    else if (motorPin == 2)
    {
      analogWrite(MOT_B1_PIN, 0);
      analogWrite(MOT_B2_PIN, pwmValue);
    }
  }
  else
  {
    if (motorPin == 1)
    {
      analogWrite(MOT_A1_PIN, 0);
      analogWrite(MOT_A2_PIN, pwmValue);
    }
    else if (motorPin == 2)
    {
      analogWrite(MOT_B1_PIN, pwmValue);
      analogWrite(MOT_B2_PIN, 0);
    }
  }
}

void fd(int speed) { motor(1, speed); motor(2, speed); } //Forward
void bk(int speed) { motor(1, -speed); motor(2, -speed); } //Backward
void sl(int speed) { motor(1, -speed); motor(2, speed); } //Spin left
void sr(int speed) { motor(1, speed); motor(2, -speed); } //Spin right
void tl(int speed) { motor(1, 0); motor(2, speed); } //Turn left
void tr(int speed) { motor(1, speed); motor(2, 0); } //Turn right
void ao(){motor(1, 0); motor(2, 0);} //Two motor stop

// void servo(int pin, int angle) {}

//void write(uint8_t pin, uint8_t value){digitalWrite(pin, state);}