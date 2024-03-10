# AUTOMATIC ROOM TEMPERATURE DETECTOR
## Date
8th March,2024
## By
[Oluwabiyi Boluwatife Joshua](https://github.com/BoluBiyi03)
## Supervised By
[Daniel Zadva Jr](https://github.com/zadvajr)
## Introduction 
Introducing our Automatic Room Temperature Detector – a straightforward device crafted to sense and monitor your indoor climate. Packed with efficient sensors, it does more than just detect the temperature; it keeps you informed about the conditions, letting you make adjustments for your comfort. No more guesswork or manual tweaking – this detector does the job seamlessly. Embrace simplicity and convenience with our Automatic Room Temperature Detector, putting you in control of your ideal indoor environment effortlessly.
## Purpose 
Automatic Room Temperature Detector would be to provide real-time information about the ambient temperature within a room. This information can be valuable for users to make informed decisions about adjusting heating, cooling, or ventilation manually based on their comfort preferences. The primary objective is to offer a convenient and timely way for individuals to stay aware of the temperature conditions in their 
living or working spaces.
## Required Hardware 
1) Arduino Board
2) LM35
3) LCD Display
4) Jumper Wires
## Schematic Design 
[Schematic capture](https://drive.google.com/file/d/1UyTEMHNMLFzWqgTHpVoadyMwwe1sk8zn/view?usp=sharing)
## Source Code 
``` cpp
//automatic room temperature detector using arduino uno
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int sensor_pin = A0; //sensor pin

void setup() {
  // put your setup code here, to run once:
  pinMode(sensor_pin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  float sensor_value = analogRead(sensor_pin);
  float temp_value = (sensor_value * (5.0/1023)) * 100.00;

  lcd.setCursor(0, 0);
  
  lcd.print("Temperature= ");
  lcd.print(temp_value);
  delay(1000);
  lcd.clear();


}
```
## HEX File 
[text]([text](temp_detector_sketch/temp_detector_sketch.ino.hex))
## Output 
[on a breadboad with arduino]()

[visual output]()
## Summary and Conclusion
In summary, the Automatic Room Temperature Detector is a device designed to detect and report real-time ambient temperatures within a room. Equipped with sensors, it offers users valuable information to make informed decisions about adjusting climate control manually based on their comfort preferences. Unlike regulating devices, it serves as an awareness tool, ensuring individuals stay informed about the temperature conditions in their living or working spaces.

In conclusion, while the Automatic Room Temperature Detector does not actively regulate temperature, its purpose lies in providing users with essential data for personalized climate control decisions. This contributes to a more conscious and informed approach to maintaining comfort within indoor environments, aligning with the growing emphasis on efficiency and user-centric control in modern living.

# THANK YOU
