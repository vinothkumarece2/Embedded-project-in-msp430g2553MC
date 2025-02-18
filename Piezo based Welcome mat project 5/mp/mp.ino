#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
#define Buzzer_PIN 7
#define LED_PIN 1
#define Piezo_PIN A0
#define Switch_PIN1 A1
#define Switch_PIN2 A2
#define Switch_PIN3 A3
#define Switch_PIN4 A4
#define Switch_PIN5 A5
#define Switch_PIN6 0
void setup()
 {
  lcd.begin(16, 2);
  pinMode(LED_PIN, OUTPUT);
  pinMode(Buzzer_PIN, OUTPUT);
  pinMode(Piezo_PIN, INPUT);
  pinMode(Switch_PIN1, INPUT);
  pinMode(Switch_PIN2, INPUT);
  pinMode(Switch_PIN3, INPUT);
  pinMode(Switch_PIN4, INPUT);
  pinMode(Switch_PIN5, INPUT);
  pinMode(Switch_PIN6, INPUT);
}
void loop() 
{
  int piezoValue = analogRead(Piezo_PIN);
  if (piezoValue != 0)
   {
    lcd.setCursor(0, 0);
    lcd.print("  Welcome");
    lcd.setCursor(0, 1);
    lcd.print(" My restaurant! ");
    delay(5000);
    lcd.clear();
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(Buzzer_PIN, HIGH);
    lcd.setCursor(0, 0);
    lcd.print("CHECK THE");
    lcd.setCursor(0, 1);
    lcd.print("HOTEL MENU");
    delay(3000);
    digitalWrite(LED_PIN, LOW);
    delay(1000);
    digitalWrite(LED_PIN, HIGH);
    delay(800);
    digitalWrite(LED_PIN, LOW);
    digitalWrite(Buzzer_PIN, LOW);
  }
  if (digitalRead(Switch_PIN1) == HIGH)
   {
    lcd.setCursor(0, 0);
    lcd.print("MONDAY OFFER");
    digitalWrite(Buzzer_PIN, HIGH);
    delay(2000);
    lcd.setCursor(0, 1);
    lcd.print("BUY ONE GET ONE");
    delay(5000);
  } 
  else
   {
    digitalWrite(Buzzer_PIN, LOW);
    lcd.clear();
  }
  if (digitalRead(Switch_PIN2) == HIGH) 
  {
    lcd.setCursor(0, 0);
    lcd.print("TUESDAY OFFER");
    digitalWrite(Buzzer_PIN, HIGH);
    delay(2000);
    lcd.setCursor(0, 1);
    lcd.print("20% OFF BURGERS");
    delay(5000);
  } 
  else 
  {
    digitalWrite(Buzzer_PIN, LOW);
    lcd.clear();
  }
  if (digitalRead(Switch_PIN3) == HIGH) 
  {
    lcd.setCursor(0, 0);
    lcd.print("WEDNESDAY OFFER");
    digitalWrite(Buzzer_PIN, HIGH);
    delay(2000);
    lcd.setCursor(0, 1);
    lcd.print("FREE DESSERT");
    delay(5000);
  }
   else
    {
    digitalWrite(Buzzer_PIN, LOW);
    lcd.clear();
  }
  if (digitalRead(Switch_PIN4) == HIGH) 
  {
    lcd.setCursor(0, 0);
    lcd.print("THURSDAY OFFER");
    digitalWrite(Buzzer_PIN, HIGH);
    delay(2000);
    lcd.setCursor(0, 1);
    lcd.print("BOGO BEVERAGES");
    delay(5000);
  } else
   {
    digitalWrite(Buzzer_PIN, LOW);
    lcd.clear();
  }
  if (digitalRead(Switch_PIN5) == HIGH) 
  {
    lcd.setCursor(0, 0);
    lcd.print("FRIDAY OFFER");
    digitalWrite(Buzzer_PIN, HIGH);
    delay(2000);
    lcd.setCursor(0, 1);
    lcd.print("30% OFF Delivery");
    delay(5000);
  } else 
  {
    digitalWrite(Buzzer_PIN, LOW);
    lcd.clear();
  }
  if (digitalRead(Switch_PIN6) == HIGH)
   {
    lcd.setCursor(0, 0);
    lcd.print("SAT AND SUN COMBO");
    digitalWrite(Buzzer_PIN, HIGH);
    delay(2000);
    lcd.setCursor(0, 1);
    lcd.print("FAMILY MEALS 25% OFF");
    delay(5000);
  } 
  else 
  {
    digitalWrite(Buzzer_PIN, LOW);
    lcd.clear();
  }
}
