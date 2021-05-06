int ledPin=12;
int ledPin2=13;
int ledPin3=11;
void setup() {
  // put your setup code here, to run once:
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
pinMode(11,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(ledPin,HIGH);
   digitalWrite(ledPin2,LOW);
   digitalWrite(ledPin3,LOW);
  
  delay(500);
   digitalWrite(ledPin,LOW);
   digitalWrite(ledPin2,HIGH);
   digitalWrite(ledPin3,LOW);
  
  delay(500);
   digitalWrite(ledPin,LOW);
   digitalWrite(ledPin2,LOW);
   digitalWrite(ledPin3,HIGH);
    delay(500);
  
}
