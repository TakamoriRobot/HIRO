/*
HIRO_Motion.h by Joseph Casebeer
This library along with coordinates the motion of multiple servos into choreographed motions
*/

#ifndef HIRO_Functions_h
#define HIRO_Functions_h

#include <Arduino.h>
#include <Servo.h>
#include <HIRO.h>



bool move(Servo &servo, int target, int increment); //Moves a target servo a towards a target angle by an increment. Keep calling function to keep incrementing. Returns true when target reached
void executeMove(Servo &servo, int target, int increment, int delayTime, int limit); //Moves a single servo by wrapping move() in a loop that terminates with move() returns true or the timer runs out




#endif