 // SET UPS ---------------------------------------------------------------------------
  void setupBuzzer () {
  pinMode(Buzzer_PIN, OUTPUT);
  }

  void setupLight () {
    pinMode(LightSensor_PIN, INPUT);
  }

  void setupSound () {
    pinMode(SoundSensor_PIN, INPUT);
  }

void setupTemp_Humid () {
  Environment.begin();
}


// -----------------------------------------------------------------------------------

// REST OF STUFF ----------------------------------------------------------------------------------------------------------------------------------------
void MyDelayFunction() {
  delay(1000); 
}

void TogglePin() {
  Buzzer_PIN_State = !Buzzer_PIN_State; 
}

void DebugBuzzer() {
  Serial.println("The Buzzer connected to PIN " + String(Buzzer_PIN) + " is " + String(Buzzer_PIN_State));     
}

void BuzzAlert() {
  tone(Buzzer_PIN, 5000, 50);
  delay(250);
  tone(Buzzer_PIN, 2500, 50);
  delay(250);
}

// -----------------------------------------------------------------------------------------------------------------------------------------------------

// IMPORTANT SHIT --------------------------------------------------------

void LightReading() {
  static unsigned int light_reading = analogRead(LightSensor_PIN);
  static unsigned int LightOutput = map(light_reading, 0, 800, 0, 255);
  Serial.print("Light Reading = ");
  Serial.println(analogRead(light_reading));
  }

void SoundReading() {
  long soundRead = 0;
    for(int i=0; i<32; i++)
    {
        sum += analogRead(soundRead);
    }
    // >>= is a bitwise shift right, the bits literally shift 5 places to the right 2^5 which is mathematically the same as diving by 32 but computationally much quicker.
    // You could also write soundRead /= 32; which is easier to read but slower to compute
    soundRead >>= 5; 
    Serial.print("Average Sensor Read Value:");
    Serial.println(soundRead);
    delay(10); 
}

