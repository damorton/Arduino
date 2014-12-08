int firstLed = 1;
int numberOfLed = 6;

void setup()
{
  for(int i = firstLed; i < numberOfLed + firstLed; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(int i = firstLed; i < numberOfLed + firstLed; i++)
  {
    digitalWrite(i, LOW);
    delay(10);    
  }
  
  for(int i = firstLed; i < numberOfLed + firstLed; i++)
  {
    digitalWrite(i, HIGH);
    delay(10);    
  }
}
