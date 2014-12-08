int potPin = 0;
int led = 11;
int val = 0;

void setup(){
  pinMode(led, OUTPUT);  
  Serial.begin(9600);
}

void loop(){
  if(val > 512){
  digitalWrite(led, HIGH);
  delay(50);
  digitalWrite(led, LOW);
  delay(50);
  }
  val = analogRead(potPin);
  Serial.println(val);
}


