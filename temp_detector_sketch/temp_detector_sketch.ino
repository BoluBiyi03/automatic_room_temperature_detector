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
  float temp_value = (sensor_value * (5.0 / 1023)) * 100.0;
  lcd.setCursor(0, 0);
  
  lcd.print(temp_value);
  lcd.print(" Degree Celsius");
  delay(1000);
  lcd.clear();


}
