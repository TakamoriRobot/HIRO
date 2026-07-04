/*
  HIRO.cpp - Library for defining and controlling a H.I.R.O. Unit.
  Created by Joseph Casebeer, December 31st 2025.
*/

#include <HIRO.h>
#include <Arduino.h>
#include <Servo.h>

HIRO::HIRO()
{
}

void HIRO::customBegin(int rflp, int rfsp, int lflp, int lfsp, int rblp, int rbsp, int lblp, int lbsp)
{
  this->rflp = rflp;
  this->rfsp = rfsp;
  this->lflp = lflp;
  this->lfsp = lfsp;
  this->rblp = rblp;
  this->rbsp = rbsp;
  this->lblp = lblp;
  this->lbsp = lbsp;
  rfl.attach(rflp, 540, 2400); // Attach pin 13 to the right front leg
  rfs.attach(rfsp, 540, 2400); // Attach pin 12 to the right front shoulder
  rbl.attach(rblp, 540, 2400); // Attach pin 11 to the right back leg
  rbs.attach(rbsp, 540, 2400); // Attach pin 10 to the right back shoulder
  lfl.attach(lflp, 540, 2400); // Attach pin 9 to the left front leg
  lfs.attach(lfsp, 540, 2400); // Attach pin 8 to the left front shoulder.
  lbl.attach(lblp, 540, 2400); // Attach pin 7 to the left back leg
  lbs.attach(lbsp, 540, 2400); // Attach pin 6 to the left back shoulder
}

void HIRO::firstGenerationBegin()
{ // This Method initializes H.I.R.O. to Trailblazer's Edition Motor Pinouts
  this->customBegin(13, 12, 18, 19, 10, 11, 21, 20);
  this->red = 7;
  this->green = 6;
  this->blue = 8;
  this->btnA = 1;
  this->btnB = 0;
  pinMode(this->btnA, INPUT);
  pinMode(this->btnB, INPUT);
  pinMode(this->red, OUTPUT);
  pinMode(this->green, OUTPUT);
  pinMode(this->blue, OUTPUT);
}

void HIRO::detachShoulders(){
  rfs.detach();
  rbs.detach();
  lfs.detach();
  lbs.detach();
}
void HIRO::reattachShoulders(){
  rfs.attach(this->rfsp);
  rbs.attach(this->rbsp);
  lfs.attach(this->lfsp);
  lbs.attach(this->lbsp);
}
/*void HIRO::firstGenerationBegin(){
  this->customBegin(13, 12, 18, 19, 10, 11, 21, 20);
}*/

void HIRO::standardBegin()
{ // This Method initializes H.I.R.O. to Standard Edition Default Motor Pinouts
  this->customBegin(13, 12, 18, 19, 10, 11, 21, 20);
}

void HIRO::detachServos()
{
  rfl.detach(); // Attach pin 13 to the right front leg
  rfs.detach(); // Attach pin 12 to the right front shoulder
  rbl.detach(); // Attach pin 11 to the right back leg
  rbs.detach(); // Attach pin 10 to the right back shoulder
  lfl.detach(); // Attach pin 9 to the left front leg
  lfs.detach(); // Attach pin 8 to the left front shoulder.
  lbl.detach(); // Attach pin 7 to the left back leg
  lbs.detach();
}