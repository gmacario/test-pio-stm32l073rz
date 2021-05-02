#include <Arduino.h>

int count;

void setup() {
  // put your setup code here, to run once:
  count = 0;
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.printf("count=%d\r\n", count);
  count++;

  delay(10);
}