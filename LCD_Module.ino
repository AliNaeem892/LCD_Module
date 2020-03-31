
#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
int output_value;


void setup() {
  
  lcd.begin(16, 2);  
  lcd.clear();  
  lcd.setCursor(0, 0);  
  lcd.print("     Welcome    "); 
  

}

void loop() {
 
lcd.setCursor(0, 0);  
lcd.print("    Moisture"); 
lcd.setCursor(7, 1);  
lcd.print(output_value); 
lcd.print(" %   "); 
}
