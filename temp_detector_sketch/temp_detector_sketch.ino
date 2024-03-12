//automatic room temperature detector using arduino uno
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int silent = 0;
const int sensor_pin = A0; //sensor pin
const int  BT_SILENCE = A5;
const int BUZZER = 13; //buzzer pin
const int blue_led = 7;
const int red_led = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensor_pin, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(blue_led, OUTPUT);
  pinMode(red_led, OUTPUT);

lcd.begin(16, 2);

}

void loop() {
  // put your main code here, to run repeatedly:
  float sensor_value = analogRead(sensor_pin);
  float temp_value = (sensor_value * (5.0/1023)) * 100.0;


  lcd.setCursor(0, 0); 
  lcd.print(temp_value);
  lcd.print(" Degree Celsius");
  delay(1000);
  lcd.clear();

if(digitalRead(BT_SILENCE) == LOW);
{
  silent = 0;
  delay(200);
}

if(temp_value < 30 || temp_value > 50);
{
  silent = 1;
}

if(silent == 1)
{
  digitalWrite(BUZZER, HIGH);
  digitalWrite(red_led, HIGH);
  delay(1000);
}

 else {
  digitalWrite(BUZZER, LOW);
  digitalWrite(blue_led, LOW);
  delay(1000);
}

}
