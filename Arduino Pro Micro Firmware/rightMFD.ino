/* Use at your own risk.
   I am not accepting responsibility for anything.
   Copyright Ron Lyttle 2021.
   
   I have to copyright because of some of the World's fools.
   But I don't have to charge you for use/distribution.
   If you modify it, put it under your own name then.
   
   Read the readme.txt for hints on how to set up screens.
   
   This .ino is for the right MFD.
   

*/

#include <Keyboard.h>

int bank1 = 8;
int bank2 = 7;
int bank3 = 9;
int bank4 = 6;
int position1 = 18;
int position2 = 15;
int position3 = 14;
int position4 = 16;
int position5 = 10;
int buttonrepeattime = 667;
unsigned long time1 = 0;
unsigned long time2 = 0;
unsigned long time3 = 0;
unsigned long time4 = 0;
unsigned long time5 = 0;
unsigned long time6 = 0;
unsigned long time7 = 0;
unsigned long time8 = 0;
unsigned long time9 = 0;
unsigned long time10 = 0;
unsigned long time11 = 0;
unsigned long time12 = 0;
unsigned long time13 = 0;
unsigned long time14 = 0;
unsigned long time15 = 0;
unsigned long time16 = 0;
unsigned long time17 = 0;
unsigned long time18 = 0;
unsigned long time19 = 0;
unsigned long time20 = 0;

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  pinMode(18, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  Keyboard.begin();
}

void loop()
{
  digitalWrite(bank1, LOW);
  if (digitalRead (position1) == LOW && millis() - time1 > buttonrepeattime)
  {
    time1 = millis();
    Keyboard.print ("rightMFD1");
  }
  if (digitalRead (position2) == LOW && millis() - time2 > buttonrepeattime)
  {
    time2 = millis();
    Keyboard.print ("rightMFD2");
  }
  if (digitalRead (position3) == LOW && millis() - time3 > buttonrepeattime)
  {
    time3 = millis();
    Keyboard.print ("rightMFD3");
  }
  if (digitalRead (position4) == LOW && millis() - time4 > buttonrepeattime)
  {
    time4 = millis();
    Keyboard.print ("rightMFD4");
  }
  if (digitalRead (position5) == LOW && millis() - time5 > buttonrepeattime)
  {
    time5 = millis();
    Keyboard.print ("rightMFD5");
  }
  digitalWrite(bank1, HIGH);

  digitalWrite(bank2, LOW);
  if (digitalRead (position1) == LOW && millis() - time6 > buttonrepeattime)
  {
    time6 = millis();
    Keyboard.print ("rightMFD6");
  }
  if (digitalRead (position2) == LOW && millis() - time7 > buttonrepeattime)
  {
    time7 = millis();
    Keyboard.print ("rightMFD7");
  }
  if (digitalRead (position3) == LOW && millis() - time8 > buttonrepeattime)
  {
    time8 = millis();
    Keyboard.print ("rightMFD8");
  }
  if (digitalRead (position4) == LOW && millis() - time9 > buttonrepeattime)
  {
    time9 = millis();
    Keyboard.print ("rightMFD9");
  }
  if (digitalRead (position5) == LOW && millis() - time10 > buttonrepeattime)
  {
    time10 = millis();
    Keyboard.print ("rightMFD10");
  }
  digitalWrite(bank2, HIGH);

  digitalWrite(bank3, LOW);
  if (digitalRead (position1) == LOW && millis() - time11 > buttonrepeattime)
  {
    time11 = millis();
    Keyboard.print ("rightMFD11");
  }
  if (digitalRead (position2) == LOW && millis() - time12 > buttonrepeattime)
  {
  time12 = millis();
    Keyboard.print ("rightMFD12");
  }
  if (digitalRead (position3) == LOW && millis() - time13 > buttonrepeattime)
  {
  time13 = millis();
    Keyboard.print ("rightMFD13");
  }
  if (digitalRead (position4) == LOW && millis() - time14 > buttonrepeattime)
  {
  time14 = millis();
    Keyboard.print ("rightMFD14");
  }
  if (digitalRead (position5) == LOW && millis() - time15 > buttonrepeattime)
  {
  time15 = millis();
    Keyboard.print ("rightMFD15");
  }
  digitalWrite(bank3, HIGH);

  digitalWrite(bank4, LOW);
  if (digitalRead (position1) == LOW && millis() - time16 > buttonrepeattime)
  {
  time16 = millis();
    Keyboard.print ("rightMFD16");
  }
  if (digitalRead (position2) == LOW && millis() - time17 > buttonrepeattime)
  {
  time17 = millis();
    Keyboard.print ("rightMFD17");
  }
  if (digitalRead (position3) == LOW && millis() - time18 > buttonrepeattime)
  {
  time18 = millis();
    Keyboard.print ("rightMFD18");
  }
  if (digitalRead (position4) == LOW && millis() - time19 > buttonrepeattime)
  {
  time19 = millis();
    Keyboard.print ("rightMFD19");
  }
  if (digitalRead (position5) == LOW && millis() - time20 > buttonrepeattime)
  {
  time20 = millis();
    Keyboard.print ("rightMFD20");
  }
  digitalWrite(bank4, HIGH);
  delay(1);
}