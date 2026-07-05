/*
 * File Name: HIRO_Easy.cpp 
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

#include <HIRO.h>
#include <HIRO_Motion.h>
#include <HIRO_Easy.h>

void easyForward(HIRO &hiro, int steps, int speed){
    //@brief Moves HIRO forward in a straight line
    //@param hiro - The HIRO object to perform the forward motion
    //@param steps - The number of steps to take forward
    //@param speed - The speed at which to perform the forward motion
    
    for(int i = 0; i < steps; i ++){
        walkForward(hiro, 0, 60, 25, speed, 0);
    }
}

void easyBackward(HIRO &hiro, int steps, int speed){
    //@brief Moves HIRO backward in a straight line
    //@param hiro - The HIRO object to perform the backward motion
    //@param steps - The number of steps to take backward
    //@param speed - The speed at which to perform the backward motion

    for(int i = 0; i < steps; i ++){
        walkBackward(hiro, 0, 60, 25, speed, 0);
    }
}

void easyClockwise(HIRO &hiro, int steps, int speed){
    //@brief Moves HIRO in a clockwise rotation
    //@param hiro - The HIRO object to perform the clockwise rotation
    //@param steps - The number of steps to take in the rotation
    //@param speed - The speed at which to perform the clockwise rotation

    for(int i = 0; i < steps; i ++){
          rotateClockwise(hiro,0, 60, 20, speed);
    }
}

void easyCounterClockwise(HIRO &hiro, int steps, int speed){
    //@brief Moves HIRO in a counter clockwise rotation
    //@param hiro - The HIRO object to perform the counter clockwise rotation
    //@param steps - The number of steps to take in the rotation
    //@param speed - The speed at which to perform the counter clockwise rotation

    for(int i = 0; i < steps; i ++){
        rotateCounterClockwise(hiro,0, 60, 20, speed);
    }
}

