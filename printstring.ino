// include the library code:

#include <LiquidCrystal.h>



// Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)

LiquidCrystal lcd(D1, D2, D4, D5, D6, D7);



void setup()

{

  // set up the LCD's number of columns and rows:

  lcd.begin(16, 2);



  // Clears the LCD screen

  lcd.clear();

}



void loop()

{

    // Print a message to the LCD.

    lcd.print(" Hello world!");




    lcd.setCursor(0, 1);

    

    // Print a message to the LCD.

    lcd.print("Thameem Here!");

}