/*
 * File Name: HIRO.h 
 * Description: Library for defining and controlling a H.I.R.O. Model TR-01-A  Unit by Takamori RObot
 * Author: Joseph Casebeer, Takamori Robot
 * Date Created: December 31st 2025.
 * Website: https://www.takamorirobot.com
 */

#include <HIRO.h>
#include <Arduino.h>
#include <Servo.h>

HIRO::HIRO()
{
}

void HIRO::customBegin(int rflp, int rfsp, int lflp, int lfsp, int rblp, int rbsp, int lblp, int lbsp)
{
  /*
   *@brief This method allows custom servo pinouts to be defined for H.I.R.O. 
   *@param rflp - Right Front Leg Pin
   *@param rfsp - Right Front Shoulder Pin
   *@param lflp - Left Front Leg Pin
   *@param lfsp - Left Front Shoulder Pin
   *@param rblp - Right Back Leg Pin
   *@param rbsp - Right Back Shoulder Pin
   *@param lblp - Left Back Leg Pin
   *@param lbsp - Left Back Shoulder Pin 
   */

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

void HIRO::begin(){
  /*
  *@brief this method initializes H.I.R.O. motor pinouts for both H.I.R.O. First Generation Edition and Standard Editions as of July 2026.
  */
  this->customBegin(13, 12, 18, 19, 10, 11, 21, 20); //Define motor pinouts.
  /*
   * Define pinouts and operation modes for the RGB LED and buttons on the H.I.R.O. Cortex PCB. 
   */
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