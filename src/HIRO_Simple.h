#ifndef HIRO_Simple_H
#define HIRO_Simple_H
#include <HIRO.h>
#include <HIRO_Motion.h>
#include <HIRO_Simple.h>

void easyForward(HIRO &hiro, int steps, int speed);

void easyBackward(HIRO &hiro, int steps, int speed);

void easyClockwise(HIRO &hiro, int steps, int speed);

void easyCounterClockwise(HIRO &hiro, int steps, int speed);

#endif