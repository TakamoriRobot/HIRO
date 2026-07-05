#include <HIRO.h>
#include <HIRO_Motion.h>
#include <HIRO.h>



HIRO hiro; // Declare an intance of HIRO.

void setup() {
  hiro.begin();
  //hiro.genZeroBegin(); Uncomment this line and comment the line above if you are using H.I.R.O. Gen Zero Edition.
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  neutralStance(hiro);
  rgbRandom();
  delay(50);
  while (!Serial) {
    ;  // wait for serial port to connect. Needed for native USB port only
  }
    Serial.println("Hello! My name is H.I.R.O!");
  }
 

void loop() {
  if(Serial.available()){
    int status = int(Serial.parseInt());
    switch (status) {
      case 1:
       // rgbRandom();
        easyForward(hiro,4, 2);
        break;
      case 2:
        rgbRandom();
        easyBackward(hiro, 4, 2);
        
        break;
      case 3:
        wave(hiro);
        rgbRandom();
        break;
      case 4:
        rgbRandom();
        easyCounterClockwise(hiro,2, 2);
        break;
      case 5:
      rgbRandom();
        easyClockwise(hiro,2, 2);
        break;
      case 6:
        rgbRandom();
        sideToSideWorm(hiro, 2);
        break;
      case 7:
        rgbRandom();
        sideToSideStretch(hiro, 1);
        break;
      case 8:
        rgbRandom();
        pushUps(hiro, 2, 5);
        break;
      case 9:
        rgbRandom();
        cabbagePatch(hiro, 5,10);
        break;
      case 10:
        rgbRandom();
        cabbagePatch2(hiro, 4, 10);
        break;
      default:
        neutralStance(hiro);
        break;
    }
  }else{
    neutralStance(hiro);
  }
}

void rgbRandom(){
  analogWrite(hiro.red, random(0,10));
  analogWrite(hiro.green, random(0,10));
  analogWrite(hiro.blue, random(0,10));
}









