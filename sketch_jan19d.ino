#define btnPin_R 2

#define ledPin_R 6

void setup() {
   pinMode(btnPin_R,INPUT_PULLUP);
   pinMode(ledPin_R,OUTPUT);

   while(digitalRead(btnPin_R)==HIGH);
   while(digitalRead(btnPin_R)==LOW);
}

void loop() {
  BlinkLed(500);
}
void BlinkLed(int prd){
  digitalWrite(ledPin_R,HIGH);
  delay(prd);
  digitalWrite(ledPin_R,LOW);
  delay(prd);
}
