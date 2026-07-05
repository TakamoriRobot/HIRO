/*
 * File Name: HIRO_Emotes.cpp 
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


#include <HIRO.h>
#include <HIRO_Functions.h>
#include <HIRO_Emotes.h>


/*
 * HIRO Emotes Section 1 SubSection 1: HIRO Wave - Main Functions
 */

void wave(HIRO &hiro){ 
  //@brief HIRO raises his right arm, counterbalances his leg and waves
  //@param hiro - The HIRO object to perform the wave emote
  counterBalanceLeg(hiro, 2);
  raiseArmWave(hiro);
  pullRightArmBack(hiro);
  for(int i = 0; i < random(3,6); i++){
    raiseArmHighWave(hiro);
    raiseArmWave(hiro);
  }
  returnRightArmBack(hiro);
  lowerArmWave(hiro);
}


/*
 * HIRO Emotes Section 1 SubSection 2: HIRO Wave - Supporting Functions
 */

void counterBalanceLeg(HIRO &hiro, int speed){ //Extends the left back leg back so the robot doesn't fall when it waves
  bool rfsb = false; bool rflb = false; bool rbsb = false; bool rblb = false;bool lfsb = false; bool lflb = false; bool lbsb = false; bool lblb = false; 
    int counter = 0;
    while(!lblb || !rbsb || !lfsb ){
    if(counter > 90){
      break;
    }
    lflb = move(hiro.lbl, 150, speed);
    rbsb = move(hiro.rbs, 120, speed);
    lfsb = move(hiro.lfs, 60, speed);
    counter++;
    delay(5);
  }
}

void pullRightArmBack(HIRO &hiro){
  bool rfsb = false; bool rflb = false; bool rbsb = false; bool rblb = false;bool lfsb = false; bool lflb = false; bool lbsb = false; bool lblb = false; 
    int counter = 0;
    while(!rfsb){
    if(counter > 90){
      break;
    }
    rfsb = move(hiro.rfs, 30, 2);
    counter++;
    delay(5);
  }
}

void returnRightArmBack(HIRO &hiro){
  bool rfsb = false; bool rflb = false; bool rbsb = false; bool rblb = false;bool lfsb = false; bool lflb = false; bool lbsb = false; bool lblb = false; 
    int counter = 0;
    while(!rfsb){
    if(counter > 90){
      break;
    }
    rfsb = move(hiro.rfs, 90, 2);
    counter++;
    delay(5);
  }
}

void raiseArmWave(HIRO &hiro){
  bool rfsb = false; bool rflb = false; bool rbsb = false; bool rblb = false;bool lfsb = false; bool lflb = false; bool lbsb = false; bool lblb = false; 
    int counter = 0;
    while(!rflb){
    if(counter > 90){
      break;
    }
    rfsb = move(hiro.rfl, 130, 2);
    counter++;
    delay(3);
  }
}

void raiseArmHighWave(HIRO &hiro){
  bool rfsb = false; bool rflb = false; bool rbsb = false; bool rblb = false;bool lfsb = false; bool lflb = false; bool lbsb = false; bool lblb = false; 
    int counter = 0;
    while(!rflb){
    if(counter > 90){
      break;
    }
    rfsb = move(hiro.rfl, 180, 2);
    counter++;
    delay(3);
  }
}

void lowerArmWave(HIRO &hiro){
  bool rfsb = false; bool rflb = false; bool rbsb = false; bool rblb = false;bool lfsb = false; bool lflb = false; bool lbsb = false; bool lblb = false; 
    int counter = 0;
    while(!rflb){
    if(counter > 90){
      break;
    }
    rfsb = move(hiro.rfl, 45, 2);
    counter++;
    delay(5);
  }
}
