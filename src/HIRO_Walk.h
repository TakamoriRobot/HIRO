#ifndef HIRO_Walk_h
#define HIRO_Walk_h

#include <HIRO.h>
#include <HIRO_Functions.h>

void neutralStance(HIRO &hiro);

/*
HIRO Walk Section 1 Sub 1: HIRO Forwards and Backwards Mobility - Main Functions
*/

void walkForward(HIRO &hiro,int stance, int step, int stride, int speed, int trim);
void walkBackward(HIRO &hiro,int stance, int step, int stride, int speed, int trim);

/*
HIRO Walk Section 1 Sub 2: HIRO Forwards and Backwards Mobility - Supporting Functions
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
HIRO Walk Section 2 Sub 1: HIRO Clockwise and Couterclockwise Mobility - Main Functions
*/
void rotateCounterClockwise(HIRO &hiro,int stance, int step, int stride, int speed);
void rotateClockwise(HIRO &hiro, int stance, int step, int stride, int speed);

/*
HIRO Walk Section 2 Sub 2: HIRO Clockwise and Couterclockwise Mobility - Supporting Functions
*/

void counterClockwiseTwist_RFL_LBL(HIRO &hiro, int stride,int speed);
void counterClockwiseTwist_LFL_RBL(HIRO &hiro,int stride,int speed);

void resetLegs(HIRO &hiro);

#endif