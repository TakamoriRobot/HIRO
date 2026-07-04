
#ifndef HIRO_Excercise_h
#define HIRO_Excercise_h

#include <HIRO.h>
#include <HIRO_Functions.h>
#include <HIRO_Walk.h>

/*
HIRO Excercise Section 1 Sub 1: HIRO Stretch and Worm - Main Functions
*/

void sideToSideSetUp(HIRO &hiro, int speed);
void sideToSideWorm(HIRO &hiro, int speed);
void sideToSideStretch(HIRO &hiro, int speed);
/*
HIRO Excercise Section 1 Sub 2: HIRO Stretch and Worm - Main Functions
*/

void sideToSideSet_LFL_RBL(HIRO &hiro,int speed);
void sideToSideSet_RFL_LBL( HIRO &hiro,int speed);
void wormLeft(HIRO &hiro, int speed);
void wormRight(HIRO &hiro, int speed);
void swayLeft(HIRO &hiro, int speed);
void swayRight(HIRO &hiro, int speed);

/*
HIRO Excercise Section 2 Sub 1: HIRO Cabbage Patch - Main Functions
*/

void cabbagePatch(HIRO &hiro, int speed, int repetitions);
void cabbagePatch2(HIRO &hiro, int speed, int repetitions );

/*
HIRO Excercise Section 2 Sub 2: HIRO Cabbage Patch - Supporting Functions
*/
void raiseLeftCabbagePatch(HIRO &hiro,int speed);
void returnLeftcabbagePatch(HIRO &hiro, int speed);
void raiseRightCabbagePatch(HIRO &hiro, int speed);
void returnRightcabbagePatch(HIRO &hiro, int speed);
void raiseLeftCabbagePatch2(HIRO &hiro, int speed);
void raiseRightCabbagePatch2(HIRO &hiro, int speed);

/*
HIRO Excercise Section 3 Sub 1: HIRO Push Ups - Main Functions
*/

void pushUps(HIRO &hiro, int speed, int repetitions);

/*
HIRO Excercise Section 3 Sub 2: HIRO Push Ups - Supporting Functions
*/

void setPushUp(HIRO &hiro, int speed);
void setPushUp_LFL_RBL(HIRO &hiro,int speed);
void setPushUp_RFL_LBL(HIRO &hiro,int speed);
void setPushUpBackLegs(HIRO &hiro, int speed);
void pushUp(HIRO &hiro, int speed);
void pushDown(HIRO &hiro, int speed);

#endif