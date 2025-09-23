# System Name: Heliopolis

## What is the system?
My system uses the temperature & humidity, light and sound sensor to detect any changes in a dark room. Its purpose is fully for curiosity (kind of like a ghost detector or something) and has no real purpose other than to detect 
changes in light, sound, temperature and humidity in a pitch black room. It will display any changes of temperature, humidity, light and sound detected to an OLED display and will activate the buzzer if the change in light or 
sound is high.

## Sensors

| Sensor | Use | Pin |
| --- | --- | --- |
| Temperature & Humidity | Measure temperature and check humidity | I2C |
| Light | Sense changes in light | A3 |
| Sound | Sense auditory changes | A2 |
| Buzzer | Auditory Alert | 5 |
| OLED | Display Information | I2C |

## Pseudocode

BEGIN
  PROCESS set up sensors (light, sound, temperature and humidity)
  PROCESS set up OLED display
  PROCESS set up Buzzer
WHILE power on = true 
  PROCESS read Light sensor
    DISPLAY “Light Level = “ + light sensor reading
    IF light sensor reading >= 500 = true 
    PROCESS alert()
    PROCESS OLEDalert()
    DISPLAY “Large change in light “
ELSE 
  PROCESS read Sound sensor
    DISPLAY “Sound Level = “ + sound sensor reading
    IF sound sensor reading >= 500 = true
    PROCESS alert()
    PROCESS OLEDalert()
    DISPLAY “Large change in sound “
ELSE
  PROCESS read temperature and humidity sensor
    DISPLAY “Temperature = “ + temperature sensor reading
    DISPLAY “Humidity = “ + humidity sensor reading
    IF temperature change is considered large
      PROCESS alert()
      PROCESS OLEDalert()
      DISPLAY “Large change in temperature “
ELSE
    IF humidity change is considered large
      PROCESS alert()
      PROCESS OLEDalert()
      DISPLAY “Large change in humidity  “
ELSE 
    RETURN to WHILE power on = true
    
ELSE power on = false
END
