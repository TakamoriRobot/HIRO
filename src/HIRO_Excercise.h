/*
 * File Name: HIRO_Excercise.h 
 * Description: Library for containing the exercise motion choreography for H.I.R.O. Model TR-01-A  Unit by Takamori Robot
 * Author: Joseph Casebeer, Takamori Robot
 * Date Created: December 31st 2025.
 * Website: https://www.takamorirobot.com
 * 
 * Instructions: The main functions for each exercise are what you can use in your sketch. 
 * The supporting functions are used by the main functions and are not intended to be used in your sketch.
 * 
 * 
 * Choreographed movements 
 * 1. sideToSideWorm - Moves HIRO side to side in a worm like dance
 * 2. sideToSideStretch - Moves HIRO stretches HIRO side to side
 * 3. cabbagePatch - Moves HIRO in a cabbage patch dance
 * 4. cabbagePatch2 - Moves HIRO in a cabbage patch dance
 * 5. pushUps - Moves HIRO in a push up motion
 */


#ifndef HIRO_Excercise_h
#define HIRO_Excercise_h

#include <HIRO.h>
#include <HIRO_Functions.h>
#include <HIRO_Walk.h>

/*
 * HIRO Excercise Section 1 Sub 1: HIRO Stretch and Worm - Main Functions
 */


void sideToSideWorm(HIRO &hiro, int speed);
void sideToSideStretch(HIRO &hiro, int speed);
/*
 * HIRO Excercise Section 1 Sub 2: HIRO Stretch and Worm - Supporting Functions
 */
void sideToSideSetUp(HIRO &hiro, int speed);
void sideToSideSet_LFL_RBL(HIRO &hiro,int speed);
void sideToSideSet_RFL_LBL( HIRO &hiro,int speed);
void wormLeft(HIRO &hiro, int speed);
void wormRight(HIRO &hiro, int speed);
void swayLeft(HIRO &hiro, int speed);
void swayRight(HIRO &hiro, int speed);

/*
 * HIRO Excercise Section 2 Sub 1: HIRO Cabbage Patch - Main Functions
 */

void cabbagePatch(HIRO &hiro, int speed, int repetitions);
void cabbagePatch2(HIRO &hiro, int speed, int repetitions );

/*
 * HIRO Excercise Section 2 Sub 2: HIRO Cabbage Patch - Supporting Functions
 */
void raiseLeftCabbagePatch(HIRO &hiro,int speed);
void returnLeftcabbagePatch(HIRO &hiro, int speed);
void raiseRightCabbagePatch(HIRO &hiro, int speed);
void returnRightcabbagePatch(HIRO &hiro, int speed);
void raiseLeftCabbagePatch2(HIRO &hiro, int speed);
void raiseRightCabbagePatch2(HIRO &hiro, int speed);

/*
 * HIRO Excercise Section 3 Sub 1: HIRO Push Ups - Main Functions
 */

void pushUps(HIRO &hiro, int speed, int repetitions);

/*
 * HIRO Excercise Section 3 Sub 2: HIRO Push Ups - Supporting Functions
 */

void setPushUp(HIRO &hiro, int speed);
void setPushUp_LFL_RBL(HIRO &hiro,int speed);
void setPushUp_RFL_LBL(HIRO &hiro,int speed);
void setPushUpBackLegs(HIRO &hiro, int speed);
void pushUp(HIRO &hiro, int speed);
void pushDown(HIRO &hiro, int speed);

#endif