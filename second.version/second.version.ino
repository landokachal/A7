#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define sda A5
#define scl A4

int adad;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.clear();
  lcd.backlight();
  pinMode(sda, OUTPUT);
  pinMode(scl, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    adad=Serial.parseInt();
  }
  lcd.setCursor(7,0);
  lcd.print(adad);
  delay(500);
  lcd.clear();
}
