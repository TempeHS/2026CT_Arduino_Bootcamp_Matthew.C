 // SET UPS ---------------------------------------------------------------------------
  void setupBuzzer () {
  pinMode(Buzzer_PIN, OUTPUT);
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