
int led = 9;
int brigthness = 255;

void setup()
{
  pinMode(led, OUTPUT);
  
}

void loop()
{
  analogWrite(led, brigthness);
}

