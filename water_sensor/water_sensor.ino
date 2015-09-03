/*
This program relays the information from a hoya water sensor
(http://www.aliexpress.com/item/Smart-Electronics-Rain-Water-Level-Sensor-Module-Detection-Liquid-Surface-Depth-Height-for-Arduino-T1592-P/32388203241.html?spm=2114.01020208.3.2.9bQyHj&ws_ab_test=201407_3,201444_6,201409_4)
and relays it to a website.
*/
#include<SoftwareSerial.h>

SoftwareSerial wifiSerial(2, 3); // connected to TX, RX on wifi chip



void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT);
Serial.begin(9600);
wifiSerial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(digitalRead(2));
delay(1000);
}
