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
#include <Arduino.h>
#include <U8g2lib.h>
#include <SPI.h>
#include <Wire.h>

#include "Arduino_SensorKit.h"


unsigned static int SoundSensor = A2;
unsigned static int LightSensor_PIN = A3;
int Buzzer_PIN = 5;
bool Buzzer_PIN_State = LOW;

U8G2_SSD1306_128X64_NONAME_F_HW_I2C OLED(U8G2_R0, SCL, SDA, U8X8_PIN_NONE);

void setup() { 
  setupBuzzer ();
  setupTemp_Humid ();
  setupOLED ();
  Serial.begin(9600); 
}

void loop() {
  TogglePin(); //Call the TogglePin function
  digitalWrite(Buzzer_PIN, Buzzer_PIN_State); //Set PIN state
  DebugBuzzer(); // Write PIN state to the serial monitor for debugging
  MyDelayFunction(); //Call the MyDelayFunction
}

