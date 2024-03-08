//automatic room temperature detector using arduino uno
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

const int sensor_pin = A0; //sensor pin

void setup() {
  // put your setup code here, to run once:
  pinMode(sensor_pin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  float sensor_value = analogRead(sensor_pin);
  float temp_value = (sensor_value - 500) / 10;

  lcd.setCursor(0, 0);
  
  lcd.print("Temperature= ");
  lcd.print(temp_value);
  delay(1000);
  lcd.clear();


}
