int tempSensor = 0;
int val;
int dat;


void setup(){
  
  Serial.begin(9600);
}

void loop(){
  
  val = analogRead(tempSensor);
  dat = (125 * val) >> 8;
  Serial.print("Temp: ");
  Serial.print(dat);
  Serial.print("C");
  delay(500);
}
