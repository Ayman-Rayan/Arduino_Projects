int latchPin=11;
int clockPin=9;
int dataPin=12;
int dt=500;

// byte LEDs=0x00; // to declare a hex number and we want to light up all the leds so 1111 1111 in hexa its just FF 
byte LEDs1=0b01010101;
byte LEDs2=0b10101010;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin, OUTPUT);
  
  
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latchPin, LOW); // when we are ready to send data we need to take the latch pin low  
  shiftOut(dataPin,clockPin,LSBFIRST,LEDs1); // on pin12 we want to send the data and we need to give it the clock pin to do the synchro,, which order are we sending the data least significant first , then the data packet we are sending 
   digitalWrite(latchPin, HIGH);
   delay(dt);
   digitalWrite(latchPin, LOW); // when we are ready to send data we need to take the latch pin low  
  shiftOut(dataPin,clockPin,LSBFIRST,LEDs2); // on pin12 we want to send the data and we need to give it the clock pin to do the synchro,, which order are we sending the data least significant first , then the data packet we are sending 
   digitalWrite(latchPin, HIGH);
   delay(dt);
}

