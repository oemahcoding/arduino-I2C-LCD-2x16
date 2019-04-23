#include  <Wire.h>
#include  <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address

void setup() 
{
  Serial.begin(9600);
 
  lcd.begin(16,2);   // initialize the lcd for 16 chars 2 lines, turn on backlight
 
  lcd.backlight();
  delay(250);
  lcd.noBacklight();
  delay(250);
  lcd.backlight();
 
  lcd.setCursor(0,0);
  lcd.print(" labelektronika ");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print(" LCD I2C Module ");
  delay(8000);
}

void loop() 
{
}
