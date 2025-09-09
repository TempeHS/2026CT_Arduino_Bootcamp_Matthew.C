# System Name: Heliopolis

## What is the system?
My system uses the temperature & humidity, light and sound sensor to detect any changes in a dark room. Its purpose is fully for curiosity (kind of like a ghost detector or something) and has no real purpose other than to detect 
changes in light, sound, temperature and humidity in a pitch black room. It will display any changes of temperature, humidity, light and sound detected to an OLED display and will activate the buzzer if the change in light or 
sound is high.

## Sensors

| Sensor | Use | Pin |
| --- | --- | --- |
| Temperature & Humidity | Measure temperature and check humidity | I2C |
| Light | Sense changes in light | 5 |
| Sound | Sense auditory changes | 6 |
| Buzzer | Auditory Alert | 4 |
| OLED | Display Information | I2C |