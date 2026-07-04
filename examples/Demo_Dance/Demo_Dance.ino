#include <HIRO.h>
#include <HIRO_Motion.h>
#include <HIRO_Functions.h>
#include <HIRO_Simple.h>

HIRO hiro;

void setup() {
  hiro.firstGenerationBegin();
  neutralStance(hiro);
  digitalWrite(hiro.green, 1);
}

void loop() {
  wave(hiro);
  randomRGB();
  neutralStance(hiro);
  randomRGB();
  delay(500);
  sideToSideStretch(hiro, 1);
  randomRGB();
  delay(500);
  neutralStance(hiro);
  randomRGB();
  delay(500);
  for (int i = 0; i < 2; i++) {
    rotateCounterClockwise(hiro, 0, 60, 20, 2);
  }
  randomRGB();
  for(int i =0; i < 4; i++){
    rotateClockwise(hiro,0, 60, 20, 2);
  }
  randomRGB();
  for (int i = 0; i < 2; i++) {
    rotateCounterClockwise(hiro, 0, 60, 20, 2);
  }
  randomRGB();
}

void randomRGB(){
  analogWrite(hiro.red, random(0, 255));
  analogWrite(hiro.green, random(0, 255));
  analogWrite(hiro.blue, random(0, 255));
}




