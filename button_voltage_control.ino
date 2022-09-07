int ledBright=0;
int buttonPin1=11;
int buttonPin2=12;
int buttonVal1;
int buttonVal2;
int buzzPin=2;
int ledPin=3;
int dt=500;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonPin1,INPUT);
  pinMode(buttonPin2,INPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(ledPin,OUTPUT);
  
}
void loop() {
  // put your main code here, to run repeatedly:
  
  buttonVal1=digitalRead(buttonPin1);
  buttonVal2=digitalRead(buttonPin2);
  Serial.print("button 1=");
  Serial.print(buttonVal1);
  Serial.print(" , ");
  Serial.print("button 2=");
  Serial.println(buttonVal2);
  delay(dt);

  if(buttonVal1==0 && buttonVal2==1){
      ledBright+=5;
  }
  
  if (buttonVal1==1 && buttonVal2==0){
       ledBright-=5;
    }
    Serial.println(ledBright);
    if(ledBright>255){
      ledBright=255;
      digitalWrite(buzzPin,HIGH);
      delay(dt);
      digitalWrite(buzzPin,LOW);
      Serial.println("WARNINNG !!!");
    }
  
  else if(ledBright<0){
     ledBright=0;
      digitalWrite(buzzPin,HIGH);
      delay(dt);
      digitalWrite(buzzPin,LOW);
      Serial.println("WARNINNG !!!");
      
    }
   
  analogWrite(ledPin,ledBright);
 
}

