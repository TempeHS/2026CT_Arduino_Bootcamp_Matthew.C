/*
  Author: 

  Learning Intention:
  The students will learn to break their code into reusable chunks called functions
  
  Success Criteria:
    1. I understand how a function is called
    2. I can break a simple program like LED blick into functions that I can be re-use
    3. I know the computation term 'abstraction.'
    4. I can create separate my functions into functions.ino files to make my code more manageable
    5. I can return values from a function and use the value in my code
    6. I can pass values into my functions to make them more secure
    7. I know the computation term encapsulation

  Student Notes:
    
  Documentation: 
    https://www.youtube.com/watch?v=mHa1mUd1Kmg 

  Schematic:
      
*/


#include "Arduino_SensorKit.h"

unsigned static int SoundSensor_PIN = A2;
unsigned static int LightSensor_PIN = A3;
int Buzzer_PIN = 5;
bool Buzzer_PIN_State = LOW;
unsigned long light_reading = 0;

int light(LightSensor_PIN);

void setup() { 
  setupBuzzer ();
  setupTemp_Humid ();

  Serial.begin(9600); 
}

void loop() {
  TogglePin();
  digitalWrite(Buzzer_PIN, Buzzer_PIN_State);
  DebugBuzzer(); 
  MyDelayFunction();
  light_reading = light.brightnessRead();




  BuzzAlert();
}

