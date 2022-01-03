#include<SoftwareSerial.h>
#include<Servo.h>
Servo x;
int bttx=2;    //tx of bluetooth module is connected to pin 9 of arduino
int btrx=3;    //rx of bluetooth module is connected to pin 10 of arduino
SoftwareSerial bluetooth(bttx,btrx);
