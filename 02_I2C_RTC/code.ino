#include <Wire.h>
#include <RTClib.h>

RTC_DS1307 rtc;
DateTime now;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  while (!rtc.begin());
  rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
}   

void loop() {
  now = rtc.now();

  Serial.print(now.day());
  Serial.print("/");
  Serial.print(now.month());
  Serial.print("/");
  Serial.println(now.year());

  Serial.print(now.hour());
  Serial.print(":");
  Serial.print(now.minute());
  Serial.print(":");
  Serial.println(now.second());

  Serial.print("\n");
  delay(1000);
}
