/*
 * File Name: Center Servos.ino 
 * Description: This example is for testing the alignment of servos connected to the cortex.
 * Author: Joseph Casebeer, Takamori Robot
 * Date Created: July 15th 2026.
 * Website: https://www.takamorirobot.com
 * 
 * Instructions:
 * Plug in your servos to the the cortex servo pins. Aligning yellow with PWM, red with PWR and Brown with ground. 
 * This sketch sets all servos to 90 degrees. At this angle the horns on all the servos should point out in the direction of
 * the cable. 
 * 
 */

#include <HIRO.h>
#include <HIRO_Motion.h>
#include <HIRO_Functions.h>

HIRO hiro;

void setup() {
  hiro.begin(); //Configure a H.I.R.O. object.
  rgbWhite();
}

void loop() {
  
}

void rgbWhite(){
  analogWrite(hiro.red, 15);
  analogWrite(hiro.green, 15);
  analogWrite(hiro.blue, 15);
}



