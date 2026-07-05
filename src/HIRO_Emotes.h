/*
 * File Name: HIRO_Emotes.h 
 * Description: Library for containing the emote motion choreography for H.I.R.O. Model TR-01-A  Unit by Takamori Robot
 * Author: Joseph Casebeer, Takamori Robot
 * Date Created: December 31st 2025.
 * Website: https://www.takamorirobot.com
 * 
 * Instructions: The main functions for each emote are what you can use in your sketch. 
 * The supporting functions are used by the main functions and are not intended to be used in your sketch.
 * 
 * 
 * Choreographed movements 
 * 1. wave - HIRO waves its right arm
 */


#ifndef HIRO_Emotes_h
#define HIRO_Emotes_h

#include <HIRO.h>
#include <HIRO_Functions.h>

/*
 * HIRO Emotes Section 1 SubSection 1: HIRO Wave - Main Functions
 */

void wave(HIRO &hiro);

/*
 * HIRO Emotes Section 1 SubSection 2: HIRO Wave - Supporting Functions
 */

void counterBalanceLeg(HIRO &hiro, int speed);
void pullRightArmBack(HIRO &hiro);
void returnRightArmBack(HIRO &hiro);
void raiseArmWave(HIRO &hiro);
void raiseArmHighWave(HIRO &hiro);
void lowerArmWave(HIRO &hiro);


#endif