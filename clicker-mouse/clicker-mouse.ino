#include "Mouse.h"

int responseDelay = 10;     // response delay of the mouse, in ms

void setup() {
  randomSeed(analogRead(0));

  Mouse.begin();
}

void loop() {

  int startTime;
  int stopTime;

  int mode = analogRead(A3)/210;        // 4 Modes: 0-210, 210-420, 420-630, 630-840, 840-1023

  switch (mode) {
    case 1:
      startTime = 2800;
      stopTime = 3000;   
      Mouse.press(MOUSE_LEFT);
      delay(random(1, 5));
      Mouse.release(MOUSE_LEFT);          
      break;
    case 2:
      startTime = 300;
      stopTime = 500;
      Mouse.press(MOUSE_LEFT);
      delay(random(1, 5));
      Mouse.release(MOUSE_LEFT);        
      break;
    case 3:
      startTime = 60;
      stopTime = 120;  
      Mouse.press(MOUSE_LEFT);
      delay(random(1, 5));
      Mouse.release(MOUSE_LEFT);      
      break;
    case 4:
      startTime = 10;
      stopTime = 20;
      Mouse.press(MOUSE_LEFT);
      delay(random(1, 5));
      Mouse.release(MOUSE_LEFT);         
      break;
    default:
      delay(random(10, 20));
  }

  delay(random(startTime, stopTime));
}
