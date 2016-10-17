#include <LiquidCrystal.h>
 
//Define pin's of connection
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup()
{
  //Define number of columns and lines of the LCD
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("Hello World!");
  lcd.setCursor(1,1);
  lcd.print("#Lays Rodrigues!");
}
 
void loop()
{
  lcd.setCursor(16,1);//Set cursor outside the LCD
  lcd.autoscroll(); //Start scroll
  lcd.print(" "); //Print a blank space to start the scroll
  delay(500);
}
