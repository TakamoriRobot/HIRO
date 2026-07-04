#include <HIRO.h>
#include <HIRO_Motion.h>
#include <HIRO_Simple.h>

void easyForward(HIRO &hiro, int steps, int speed){
    for(int i = 0; i < steps; i ++){
        walkForward(hiro, 0, 60, 25, speed, 0);
    }
}

void easyBackward(HIRO &hiro, int steps, int speed){
    for(int i = 0; i < steps; i ++){
        walkBackward(hiro, 0, 60, 25, speed, 0);
    }
}

void easyClockwise(HIRO &hiro, int steps, int speed){
    for(int i = 0; i < steps; i ++){
        for(int i =0; i < 2; i++){
          rotateClockwise(hiro,0, 60, 20, speed);
        }
    }
}

void easyCounterClockwise(HIRO &hiro, int steps, int speed){
    for(int i = 0; i < steps; i ++){
        rotateCounterClockwise(hiro,0, 60, 20, speed);
    }
}

