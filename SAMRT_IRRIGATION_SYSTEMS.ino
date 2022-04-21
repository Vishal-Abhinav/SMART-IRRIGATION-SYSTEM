 // CODE EXECUTED & PREPARED BY VISHAL ABHINAV 1AM20MC103
// DEPT. OF MCA , AMC ENGINEERING COLLEGE, BANGALORE -83

#include <LiquidCrystal.h>
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5 ); //********
#define soil 9
void setup()
{
  pinMode(soil, INPUT);
  pinMode(10, OUTPUT);
  lcd.begin(16, 2);
  lcd.print("   AUTOMATIC  ");
  lcd.setCursor(0, 1);
  lcd.print("IRRIGATION SYSTEM");

  delay(2000);
}
void loop()
{
  if (digitalRead(soil) == HIGH)
  {
    digitalWrite(10, HIGH);
    // delay(200);
    lcd.clear();
    lcd.print("    MOTOR");
    lcd.setCursor(0, 1);
    lcd.print("     ON   ");
    delay(300);

  }


  else
  {
    digitalWrite(10, LOW);
    //digitalWrite(fire, LOW);
    lcd.clear();
    lcd.print("   MOTOR  ");
    lcd.setCursor(0, 1);
    lcd.print("    OFF ");
    delay(200);
  }
}
