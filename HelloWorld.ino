//Shreyas V
//ECE1895
//Assignment 8 Hello World
//LED1

//Button pin mapping
int button = 9;

//Light pin mapping
int light0 = 8;

void setup() {
//LED Output

  pinMode(8, OUTPUT);

//Button Input  
  pinMode(9, INPUT);
  
}

void loop() {

  //wait for button Click

  if(digitalRead(button)==HIGH)
  {
  
  digitalWrite(light0, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(light0, LOW);    // turn the LED off by making the voltage LOW
  delay(1000); 

  }

//if no button click, LED is off  
else
{
digitalWrite(light0, LOW); 
}  
}
