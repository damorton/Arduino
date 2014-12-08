int ledPin = 11;
int inputPin = 7;
int val;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
}

void loop()
{
  val = digitalRead(inputPin);
  if(val == LOW)
  {
    digitalWrite(ledPin, LOW);
  }
  else
  {
    digitalWrite(ledPin, HIGH);
  }
}

