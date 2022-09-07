int buttonRead;
int ledState=0;
int buttonPin=11;
int buttonNew;
int buttonOld;
int ledPin=7;
int dt=100;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonPin,INPUT);
  pinMode(ledPin,OUTPUT);
  
}
void loop() {
  // put your main code here, to run repeatedly:
  
  buttonNew=digitalRead(buttonPin);
  Serial.println(buttonNew);
  delay(dt);
  if(buttonOld==1 && buttonNew==0){
    if(ledState==0){
      digitalWrite(ledPin,HIGH);
      ledState=1;
    }
    else{
      digitalWrite(ledPin,LOW);
      ledState=0;
    }
  }
  buttonOld=buttonNew;
  delay(dt);
}

