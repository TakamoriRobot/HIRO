#include <HIRO.h>
#include <HIRO_Functions.h>
#include <HIRO_Emotes.h>

void wave(HIRO &hiro){ //Robot raises its arm, and waves
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
  Movements for wave();
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
