
int led = 9;
int led2 = 10;

void setup()
{
  pinMode(led, OUTPUT);    
  pinMode(led2, OUTPUT);
}

void loop()
{
  // turn leds on
  analogWrite(led, 255);
  delay(100);
  analogWrite(led2, 255);
  delay(200);
  
  // turn leds off
  analogWrite(led, 0);
  delay(100);
  analogWrite(led2, 0);
  delay(200);
  
  
}

