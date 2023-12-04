#include "NHNano.h"

void sserial(const char *format, ...) {
  char buffer[256];
  va_list args;
  va_start(args, format);
  vsnprintf(buffer, sizeof(buffer), format, args);
  Serial.print(buffer);
  va_end(args);
}

int analog(int pin) {
  return analogRead(pin);
}

int digital(int pin) {
  return digitalRead(pin);
}
