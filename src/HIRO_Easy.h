#ifndef HIRO_Easy_H
#define HIRO_Easy_H
#include <HIRO.h>
#include <HIRO_Motion.h>
#include <HIRO_Easy.h>

void easyForward(HIRO &hiro, int steps, int speed);

void easyBackward(HIRO &hiro, int steps, int speed);

void easyClockwise(HIRO &hiro, int steps, int speed);

void easyCounterClockwise(HIRO &hiro, int steps, int speed);

#endif