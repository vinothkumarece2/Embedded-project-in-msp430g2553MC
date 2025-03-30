#define LDR_PIN A1
#define PIR_PIN 7
#define RELAY1_PIN 13
#define RELAY2_PIN 12
#define LDR_DARK_THRESHOLD 300 

void setup() 
{
  pinMode(LDR_PIN, INPUT);
  pinMode(PIR_PIN, INPUT); 
  pinMode(RELAY1_PIN, OUTPUT);
  pinMode(RELAY2_PIN, OUTPUT);
  digitalWrite(RELAY1_PIN, LOW); 
  digitalWrite(RELAY2_PIN, LOW);
}

void loop() 
{
  int ldrValue = analogRead(LDR_PIN);
  int pirValue = digitalRead(PIR_PIN);

  if (ldrValue < LDR_DARK_THRESHOLD) 
  {
    digitalWrite(RELAY1_PIN, HIGH);  

    if (pirValue == HIGH) 
    {
      digitalWrite(RELAY2_PIN, HIGH);
      delay(3000);
      digitalWrite(RELAY2_PIN, LOW);
    }
  } 
  else 
  {
    digitalWrite(RELAY1_PIN, LOW);
    digitalWrite(RELAY2_PIN, LOW);
  }
}
*