int photoRes = 0;
int led = 11;
int val = 0;

void setup(){
  
  pinMode(led, OUTPUT);  
  Serial.begin(9600);
}

void loop(){
  
  val = analogRead(photoRes);
  Serial.println(val);
  analogWrite(led, val);
  delay(10);
}
