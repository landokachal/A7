#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define sda A5
#define scl A4

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.clear();
  lcd.backlight();
  pinMode(sda, OUTPUT);
  pinMode(scl, OUTPUT);
}

void loop() {
  lcd.setCursor(2, 0);
  lcd.print("hello world");
}
