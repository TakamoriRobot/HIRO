/*
 * File Name: HIRO_Easy.h 
 * Description: Library simplifies walking choreography for H.I.R.O. Model TR-01-A  Unit by Takamori Robot
 * Author: Joseph Casebeer, Takamori Robot
 * Date Created: December 31st 2025.
 * Website: https://www.takamorirobot.com
 * 

 * 
 * 
 * Choreographed movements 
 * 1. easyForward - Moves HIRO forward in a straight line
 * 2. easyBackward - Moves HIRO backward in a straight line
 * 3. easyClockwise - Moves HIRO in a clockwise rotation
 * 4. easyCounterClockwise - Moves HIRO in a counter clockwise rotation
 */

#ifndef HIRO_Easy_H
#define HIRO_Easy_H
#include <HIRO.h>
#include <HIRO_Motion.h>
#include <HIRO_Easy.h>

void easyForward(HIRO &hiro, int steps, int speed); //Moves HIRO forward in a straight line

void easyBackward(HIRO &hiro, int steps, int speed); //Moves HIRO backward in a straight line

void easyClockwise(HIRO &hiro, int steps, int speed);   //Moves HIRO in a clockwise rotation

void easyCounterClockwise(HIRO &hiro, int steps, int speed); //Moves HIRO in a counter clockwise rotation

#endif