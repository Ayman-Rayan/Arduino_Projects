int readPin=A3;
int redLightPin=9;
int potVal;
float ledVal;
int d=500;


void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);
  pinMode(redLightPin,OUTPUT);
  Serial.begin(9600); // setting up our serial monitor 
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(readPin); // we get that value from that pin and put it in V2 
  ledVal=(255./1023.)*potVal;
  analogWrite(redLightPin,ledVal);
  Serial.println(ledVal);
}
