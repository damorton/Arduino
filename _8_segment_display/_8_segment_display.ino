int comAnode = 3;
int dp = 4;
int a = 7;
int b = 6;
int c = 5;
int d = 10;
int e = 11;
int f = 8;
int g = 9;
int on = LOW;
int off = HIGH;

void setup(){

  for(int i = 3; i <= 11; i++){

    pinMode(i, OUTPUT);
  }
  
}

void loop(){

  while(true){

    displayA();
    delay(500);   
    
    displayR();
    delay(500);
    
    displayD();
    delay(500);    
    
    displayU();
    delay(500);
           
    displayI();
    delay(500);
        
    displayN();
    delay(500);
    
    displayO();
    delay(500);
    
    displayP();
    delay(500);
    
    displayOff();
    delay(500);
    
  }  
}

// display the letter A
void displayA(){
  digitalWrite(comAnode, HIGH);  
  digitalWrite(a, on);
  digitalWrite(b, on);
  digitalWrite(c, on);
  digitalWrite(d, off);
  digitalWrite(e, on);
  digitalWrite(f, on);
  digitalWrite(g, on);
  digitalWrite(dp, off);
}

// display the letter B
void displayB(){
  digitalWrite(comAnode, HIGH);  
  digitalWrite(a, off);
  digitalWrite(b, off);
  digitalWrite(c, on);
  digitalWrite(d, on);
  digitalWrite(e, on);
  digitalWrite(f, on);
  digitalWrite(g, on);
  digitalWrite(dp, off);
}

// display the letter C
void displayC(){
  digitalWrite(comAnode, HIGH);  
  digitalWrite(a, on);
  digitalWrite(b, off);
  digitalWrite(c, off);
  digitalWrite(d, on);
  digitalWrite(e, on);
  digitalWrite(f, on);
  digitalWrite(g, off);
  digitalWrite(dp, off);
}

// display the letter D
void displayD(){
  digitalWrite(comAnode, HIGH);  
  digitalWrite(a, off);
  digitalWrite(b, on);
  digitalWrite(c, on);
  digitalWrite(d, on);
  digitalWrite(e, on);
  digitalWrite(f, off);
  digitalWrite(g, on);
  digitalWrite(dp, off);
}

// display the letter E
void displayE(){
  digitalWrite(comAnode, HIGH);  
  digitalWrite(a, on);
  digitalWrite(b, off);
  digitalWrite(c, off);
  digitalWrite(d, on);
  digitalWrite(e, on);
  digitalWrite(f, on);
  digitalWrite(g, on);
  digitalWrite(dp, off);
}

// display the letter I
void displayI(){
  digitalWrite(comAnode, HIGH);  
  digitalWrite(a, off);
  digitalWrite(b, on);
  digitalWrite(c, on);
  digitalWrite(d, off);
  digitalWrite(e, off);
  digitalWrite(f, off);
  digitalWrite(g, off);
  digitalWrite(dp, off);
}

// display the letter N
void displayN(){
  digitalWrite(comAnode, HIGH);  
  digitalWrite(a, off);
  digitalWrite(b, off);
  digitalWrite(c, on);
  digitalWrite(d, off);
  digitalWrite(e, on);
  digitalWrite(f, off);
  digitalWrite(g, on);
  digitalWrite(dp, off);
}

// display the letter O
void displayO(){
  digitalWrite(comAnode, HIGH);  
  digitalWrite(a, off);
  digitalWrite(b, off);
  digitalWrite(c, on);
  digitalWrite(d, on);
  digitalWrite(e, on);
  digitalWrite(f, off);
  digitalWrite(g, on);
  digitalWrite(dp, off);
}

// display the letter P
void displayP(){
  digitalWrite(comAnode, HIGH);  
  digitalWrite(a, on);
  digitalWrite(b, on);
  digitalWrite(c, off);
  digitalWrite(d, off);
  digitalWrite(e, on);
  digitalWrite(f, on);
  digitalWrite(g, on);
  digitalWrite(dp, off);
}

// display the letter R
void displayR(){
  digitalWrite(comAnode, HIGH);  
  digitalWrite(a, off);
  digitalWrite(b, off);
  digitalWrite(c, off);
  digitalWrite(d, off);
  digitalWrite(e, on);
  digitalWrite(f, off);
  digitalWrite(g, on);
  digitalWrite(dp, off);
}

// display the letter U
void displayU(){
  digitalWrite(comAnode, HIGH);  
  digitalWrite(a, off);
  digitalWrite(b, on);
  digitalWrite(c, on);
  digitalWrite(d, on);
  digitalWrite(e, on);
  digitalWrite(f, on);
  digitalWrite(g, off);
  digitalWrite(dp, off);
}

// display the letter V
void displayV(){
  digitalWrite(comAnode, HIGH);  
  digitalWrite(a, off);
  digitalWrite(b, off);
  digitalWrite(c, on);
  digitalWrite(d, on);
  digitalWrite(e, on);
  digitalWrite(f, off);
  digitalWrite(g, off);
  digitalWrite(dp, off);
}

// turn off the display
void displayOff(){
  digitalWrite(comAnode, HIGH);  
  digitalWrite(a, off);
  digitalWrite(b, off);
  digitalWrite(c, off);
  digitalWrite(d, off);
  digitalWrite(e, off);
  digitalWrite(f, off);
  digitalWrite(g, off);
  digitalWrite(dp, off);
}
