
#include <HIRO.h>
#include <HIRO_Functions.h>
#include <HIRO_Walk.h>



void neutralStance(HIRO &hiro){
   hiro.rfs.attach(hiro.rfsp);
   hiro.lbs.attach(hiro.lbsp);
   bool rfsb = false; bool rflb = false; bool rbsb = false; bool rblb = false;bool lfsb = false; bool lflb = false; bool lbsb = false; bool lblb = false; 
   int counter = 0;
   while (!rfsb || !rflb  || !rblb  || !lflb || !lbsb || !lblb)
   {
     if (counter > 180)
     {
       break;
     }
     rfsb = move(hiro.rfs, 90, 1);
     rflb = move(hiro.rfl, 0, 1);
     rbsb = move(hiro.rbs, 90, 1);
     rblb = move(hiro.rbl, 0, 1);
     lfsb = move(hiro.lfs, 90, 1);
     lflb = move(hiro.lfl, 180, 1);
     lbsb = move(hiro.lbs, 90, 1);
     lblb = move(hiro.lbl, 180, 1);
     counter++;
     delay(5);
   }
}



/*
HIRO Walk Section 1 Sub 1: HIRO Forwards and Backwards Mobility - Main Functions
*/

void walkForward(HIRO &hiro, int stance, int step, int stride, int speed, int trim){
  //stance: beginning feet angle..
  //step: leg angle change when taking a step.
  //stride: shoulder angle change when taking a step.
  //speed: leg speed. 
  //Trim adjustment in the walk to adjust for any left or right varience
  rightStepForward(hiro, stance, step, stride, speed, trim);
  leftStepForward(hiro, stance, step, stride, speed, trim);
}

void walkBackward(HIRO &hiro, int stance, int step, int stride, int speed, int trim){
  //stance: beginning feet angle..
  //step: leg angle change when taking a step.
  //stride: shoulder angle change when taking a step.
  //speed: leg speed. 
  rightStepBackward(hiro, stance, step, stride, speed, trim);
  leftStepBackward(hiro, stance, step, stride, speed, trim);
}
/*
HIRO Walk Section 1 Sub 2: HIRO Forwards and Backwards Mobility - Supporting Functions
*/

void rightStepForward(HIRO &hiro, int stance, int step, int stride, int speed, int trim){
    raise_RFL_LBL(hiro, step, speed);
    swingForward_RFL_LBL(hiro, stride, speed, trim);
    lower_RFL_LBL(hiro, stance, speed);
}

void leftStepForward(HIRO &hiro, int stance, int step, int stride, int speed, int trim){
  raise_LFL_RBL(hiro, step, speed);
  swingForward_LFL_RBL(hiro, stride, speed, trim);
  lower_LFL_RBL(hiro, stance, speed);
}

void rightStepBackward(HIRO &hiro, int stance, int step, int stride, int speed, int trim){
    raise_RFL_LBL(hiro, step, speed);
    swingForward_LFL_RBL(hiro, stride, speed, trim);
    lower_RFL_LBL(hiro, stance, speed);
}

void leftStepBackward(HIRO &hiro, int stance, int step, int stride, int speed, int trim){
  raise_LFL_RBL(hiro, step, speed);
  swingForward_RFL_LBL(hiro, stride, speed, trim);
  lower_LFL_RBL(hiro, stance, speed);
}

void raise_RFL_LBL(HIRO &hiro, int step, int speed){
    bool rfsb = false; bool rflb = false; bool rbsb = false; bool rblb = false;bool lfsb = false; bool lflb = false; bool lbsb = false; bool lblb = false; 
    int counter = 0;
    while(!rflb && !lflb){
    if(counter > 90){
      break;
    }
    rflb = move(hiro.rfl, 90-step, speed);
    lblb = move(hiro.lbl, 90+step, speed);
    counter++;
    delay(5);
  }
}

void raise_LFL_RBL(HIRO &hiro, int step, int speed){
    bool rfsb = false; bool rflb = false; bool rbsb = false; bool rblb = false;bool lfsb = false; bool lflb = false; bool lbsb = false; bool lblb = false; 
    int counter = 0;
    while(!lflb && !rflb){
    /*if(counter > 80){
      break;
    }*/
    lflb = move(hiro.lfl, 90+step, speed);
    rblb = move(hiro.rbl, 90-step, speed);
    counter++;
    delay(5);
  }
}

void lower_RFL_LBL(HIRO &hiro, int stance, int speed){
  bool rfsb = false; bool rflb = false; bool rbsb = false; bool rblb = false;bool lfsb = false; bool lflb = false; bool lbsb = false; bool lblb = false; 
    int counter = 0;
    while(!rflb && !lflb){
    if(counter > 90){
      break;
    }
    rflb = move(hiro.rfl, 0+stance, speed);
    lblb = move(hiro.lbl, 180-stance, speed);
    counter++;
    delay(5);
  }
}

void lower_LFL_RBL(HIRO &hiro, int stance, int speed){
  bool rfsb = false; bool rflb = false; bool rbsb = false; bool rblb = false;bool lfsb = false; bool lflb = false; bool lbsb = false; bool lblb = false; 
    int counter = 0;
    while(!lflb && !rflb){
    if(counter > 90){
      break;
    }
    lflb = move(hiro.lfl, 180-stance, speed);
    rblb = move(hiro.rbl, 0+stance, speed);
    counter++;
    delay(5);
  }
}

void swingForward_RFL_LBL(HIRO &hiro, int stride, int speed, int trim){
  bool rfsb = false; bool rflb = false; bool rbsb = false; bool rblb = false;bool lfsb = false; bool lflb = false; bool lbsb = false; bool lblb = false; 
    int counter = 0;
    while(!rfsb || !lbsb || !lfsb || !rbsb){
    if(counter > 90){
      break;
    }
    
    rfsb = move(hiro.rfs, (90+stride+trim), speed);
    lbsb = move(hiro.lbs, (90-stride+trim), speed);
    lfsb = move(hiro.lfs, (90+stride+trim), speed);
    rbsb = move(hiro.rbs, (90-stride+trim), speed);
    counter++;
    delay(5);
    }
}

void swingForward_LFL_RBL(HIRO &hiro,int stride, int speed, int trim){
  bool rfsb = false; bool rflb = false; bool rbsb = false; bool rblb = false;bool lfsb = false; bool lflb = false; bool lbsb = false; bool lblb = false; 
    int counter = 0;
    while(!rfsb || !lbsb || !lfsb || !rbsb){
    if(counter > 90){
      break;
    }

    rfsb = move(hiro.rfs, (90-stride+trim), speed);
    lbsb = move(hiro.lbs, (90+stride+trim), speed);
    lfsb = move(hiro.lfs, (90-stride+trim), speed);
    rbsb = move(hiro.rbs, (90+stride+trim),speed);


    counter++;
    delay(5);
  }
}


/*
HIRO Walk Section 2 Sub 1: HIRO Clockwise and Couterclockwise Mobility - Main Functions
*/

void rotateCounterClockwise(HIRO &hiro, int stance, int step, int stride, int speed){
  raise_RFL_LBL(hiro, step, speed);
  counterClockwiseTwist_RFL_LBL(hiro, stride, speed);
  lower_RFL_LBL(hiro, stance, speed);
  raise_LFL_RBL(hiro, step, speed);
  counterClockwiseTwist_LFL_RBL(hiro, stride, speed);
  lower_LFL_RBL(hiro, stance, speed);
}

void rotateClockwise(HIRO &hiro, int stance, int step, int stride, int speed){
  raise_RFL_LBL(hiro, step, speed);
  counterClockwiseTwist_LFL_RBL(hiro, stride, speed);
  lower_RFL_LBL(hiro, stance, speed);
  raise_LFL_RBL(hiro, step, speed);
  counterClockwiseTwist_RFL_LBL(hiro, stride, speed);
  lower_LFL_RBL(hiro, stance, speed);
}

/*
HIRO Walk Section 2 Sub 2: HIRO Clockwise and Couterclockwise Mobility - Supporting Functions
*/

void counterClockwiseTwist_RFL_LBL(HIRO &hiro, int stride,int speed){
  bool rfsb = false; bool rflb = false; bool rbsb = false; bool rblb = false;bool lfsb = false; bool lflb = false; bool lbsb = false; bool lblb = false; 
    int counter = 0;
    while(!rfsb || !lbsb || !lfsb || !rbsb){
    if(counter > 90){
      break;
    }
    rfsb = move(hiro.rfs, (90+stride), speed);
    lbsb = move(hiro.lbs, (90+stride), speed);
    lfsb = move(hiro.lfs, (90-stride), speed);
    rbsb = move(hiro.rbs, (90-stride), speed);
    counter++;
    delay(5);
    }
}

void counterClockwiseTwist_LFL_RBL(HIRO &hiro,int stride,int speed){
  bool rfsb = false; bool rflb = false; bool rbsb = false; bool rblb = false;bool lfsb = false; bool lflb = false; bool lbsb = false; bool lblb = false; 
    int counter = 0;
    while(!rfsb || !lbsb || !lfsb || !rbsb){
    if(counter > 90){
      break;
    }
    rfsb = move(hiro.rfs, (90-stride), speed);
    lbsb = move(hiro.lbs, (90-stride), speed);
    lfsb = move(hiro.lfs, (90+stride), speed);
    rbsb = move(hiro.rbs, (90+stride), speed);
    counter++;
    delay(5);
    }
}


void resetLegs(HIRO &hiro){
  hiro.rfl.write(20);
  delay(200);
  hiro.rfs.write(90);
  delay(200);
  hiro.rfl.write(0);
  delay(200);
  

  hiro.rbl.write(30);
  delay(200);
  hiro.rbs.write(90);
  delay(200);
  hiro.rbl.write(0);
  delay(200);

  hiro.lbl.write(150);
  delay(200);
  hiro.lbs.write(90);
  delay(200);
  hiro.lbl.write(180);
  delay(200);

  hiro.lfl.write(160);
  delay(200);
  hiro.lfs.write(90);
  delay(200);
  hiro.lfl.write(180);
  delay(200);
}