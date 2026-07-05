/*
 * File Name: HIRO_Walk.h
 * Description: Library storing walking choreography for H.I.R.O. Model TR-01-A  Unit by Takamori Robot
 * Author: Joseph Casebeer, Takamori Robot
 * Date Created: December 31st 2025.
 * Website: https://www.takamorirobot.com
 * 
 * Instructions: Use the main functions in your code to make H.I.R.O. walk forward, backward, and rotate clockwise and counterclockwise.
 * The supporting functions are used by the main functions are not reccommended to be used in your code unless you are an advanced user 
 * and understand how the supporting functions work.
 */

#ifndef HIRO_Walk_h
#define HIRO_Walk_h

#include <HIRO.h>
#include <HIRO_Functions.h>

void neutralStance(HIRO &hiro);

/*
* HIRO Walk Section 1 Sub 1: HIRO Forwards and Backwards Mobility - Main Functions
*/

void walkForward(HIRO &hiro,int stance, int step, int stride, int speed, int trim);
void walkBackward(HIRO &hiro,int stance, int step, int stride, int speed, int trim);

/*
 * HIRO Walk Section 1 Sub 2: HIRO Forwards and Backwards Mobility - Supporting Functions
 */
void rightStepForward(HIRO &hiro, int stance, int step, int stride, int speed, int trim);
void leftStepForward(HIRO &hiro, int stance, int step, int stride, int speed, int trim);
void rightStepBackward(HIRO &hiro, int stance, int step, int stride, int speed, int trim);
void leftStepBackward(HIRO &hiro, int stance, int step, int stride, int speed, int trim);
void raise_RFL_LBL(HIRO &hiro, int step, int speed);
void raise_LFL_RBL(HIRO &hiro, int step, int speed);
void lower_LFL_RBL(HIRO &hiro, int stance, int speed);
void lower_RFL_LBL(HIRO &hiro, int stance, int speed);
void swingForward_RFL_LBL(HIRO &hiro, int stride, int speed, int trim);
void swingForward_LFL_RBL(HIRO &hiro,int stride, int speed, int trim);


/*
 *HIRO Walk Section 2 Sub 1: HIRO Clockwise and Couterclockwise Mobility - Main Functions
 */
void rotateCounterClockwise(HIRO &hiro,int stance, int step, int stride, int speed);
void rotateClockwise(HIRO &hiro, int stance, int step, int stride, int speed);

/*
* HIRO Walk Section 2 Sub 2: HIRO Clockwise and Couterclockwise Mobility - Supporting Functions
*/

void counterClockwiseTwist_RFL_LBL(HIRO &hiro, int stride,int speed);
void counterClockwiseTwist_LFL_RBL(HIRO &hiro,int stride,int speed);

void resetLegs(HIRO &hiro);

#endif