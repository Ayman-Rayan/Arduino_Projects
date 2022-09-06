int Blinks;
int redLight=7;
String msg="How many Blinks do u want:";
int d=500;
int i=0;
void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600); // setting up our serial monitor 
}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println(msg);
  while (Serial.available()==0){
  
  }
  Blinks=Serial.parseInt();
  while (i<Blinks){
    digitalWrite(redLight,HIGH);
    delay(d);
    digitalWrite(redLight,LOW);
    delay(d);
    i++;
  }
}
