 // SET UPS ---------------------------------------------------------------------------
  void setupBuzzer () {
  pinMode(Buzzer_PIN, OUTPUT);
  }

void setupTemp_Humid () {
  Environment.begin();
}

void setupOLED () {
  OLED.begin();
}
// -----------------------------------------------------------------------------------

// REST OF STUFF ----------------------------------------------------------------------------------------------------------------------------------------
void MyDelayFunction() {
  delay(1000); 
}

void TogglePin() {
  Buzzer_PIN_State = !Buzzer_PIN_State; 
}

void DebugLED() {
  Serial.println("The Buzzer connected to PIN " + String(Buzzer_PIN) + " is " + String(Buzzer_PIN_State));     
}

// -----------------------------------------------------------------------------------------------------------------------------------------------------