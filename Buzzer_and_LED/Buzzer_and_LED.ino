int buzzer = 8;
int led = 4;

void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop()
{  
  digitalWrite(buzzer, HIGH);
  digitalWrite(led, HIGH);
  delay(5);
  digitalWrite(buzzer, LOW);
  digitalWrite(led, LOW);
  delay(5);  
}
