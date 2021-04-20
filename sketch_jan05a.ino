#define GreenLedPin  6
#define RedLedPin  9
#define BtnLedPin  11

void setup() { 
   
}

void loop() {
int blinkRate=200
    ,digitalWrite(RedLedPin,HIGH);
    digitalWrite(GreenLedPin,LOW);
    delay(1500);

    digitalWrite(RedLedPin,LOW);
    digitalWrite(GreenLedPin,HIGH);
    delay(700);
 for(int k=0;k<3;k=k+1)
           digitalWrite(GreenLedPin,LOW);
           delay(blinkRate);
           digitalWrite(GreenLedPin,HIGH);
           delay(blinkRate);
}
