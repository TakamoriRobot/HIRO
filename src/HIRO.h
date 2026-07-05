/*
 * File Name: HIRO.h 
 * Description: Library for defining and controlling a H.I.R.O. Model TR-01-A  Unit by Takamori Robot
 * Author: Joseph Casebeer, Takamori Robot
 * Date Created: December 31st 2025.
 * Website: https://www.takamorirobot.com
 */

#ifndef HIRO_h
#define HIRO_h

#include <Arduino.h>
#include <Servo.h>

class HIRO
{
public:
  Servo rfl; //Right Front Leg Servo
  Servo rfs; //Right Front Shoulder Servo
  Servo lfl; //Left Front Leg Servo
  Servo lfs; //Left Front Shoulder Servo
  Servo rbl; //Right Back Leg
  Servo rbs; //Right Back Shoulder
  Servo lbl; //Left Back Leg
  Servo lbs; //Left Back Shoulder
  int rflp; //right front leg pin
  int rfsp; //right front shoulder pin
  int lflp; //left front leg pin
  int lfsp; //left front shoulder pin
  int rblp; //right back leg pin
  int rbsp; // right back shoulder pin
  int lblp; //left back leg pin
  int lbsp; //left back shoulder pin
  int red; //Red LED on mounted RGB LED (First Generation Edition and Standard Editions as of May 2026)
  int green; //Green LED on RGB LED (First Generation Edition and Standard Editions as of May 2026)
  int blue; //Blue LED on RGB LED (First Generation Edition and Standard Editions as of May 2026)
  int btnA; //Button A on PCB (First Generation Edition and Standard Editions as of May 2026
  int btnB; //Button B on PCB (First Generation Edition and Standard Editions as of May 2026)
  //Pedometry

  HIRO();
  void begin();                 // This Method initializes H.I.R.O. first Gen Edition and Standard Edition Motor Pinouts
  void genZeroBegin();          // This Method initializes H.I.R.O. to Generation Zero Motor Pinouts
  void firstGenerationBegin();  // This Method initializes H.I.R.O. to FirstGeneration Edition Motor Pinouts (Legacy Code Use begin() instead)
  void customBegin(int rflp, int rfsp, int lflp, int lfsp, int rblp, int rbsp, int lblp, int lbsp); // This method allows custom motor pinouts.
  void detachServos(); //Detach All Servos Servos

private:
};

#endif