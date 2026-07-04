#include <Arduino.h>
#include <Servo.h>
#include <HIRO.h>
#include <HIRO_Functions.h>

bool move(Servo &servo, int target, int increment){ //Increments the servo towards a target.
  bool isDone = false; //If the servo hasn't reached its location isDone is false. 
  int current = servo.read(); //reads the servo's current position.
  
  if(target == current){ // If target is equal to current, then return true because the angle has been reached.
    return true;
  }

  if(target <= 0){ //If the target is less than zero set target to zero.
    target = 0;
  }

  if(target >= 180){ // If the target angle is greater than 180 degrees set target to 180 degrees.
    target = 180;
  }

  if(target < current){ //If target is less than the current angle, decrement
    increment = -increment;
  }
  
  if(abs(target - current) <= abs(increment)){ //If the servo value is within the increment of the target, set servo angle to target
    servo.write(target);
    return true;
  }else{
    if(current + increment > 180){
      servo.write(180);
      return false;
    }else if(current + increment < 0){
      servo.write(0);
      return false;
    }else{
      int angle = current + increment;
      servo.write(angle);
      return false;
    }
  }
}

void executeMove(Servo &servo, int target, int increment, int delayTime, int limit){ //Good code for moving one limb at a time.
  bool isDone = false;
  int counter = 0;
  while (!isDone && counter <= limit){
    isDone = move(servo, target, increment);
    counter ++;
    delay(delayTime);
  }
}