int ldr = A4;
int value = 0;
int LED = 12;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(ldr);
  Serial.println("Intensity of the ldr is = ");
  Serial.println(value);
  if(value < 200)
  {
    digitalWrite(LED,HIGH);
  }
  else{
    digitalWrite(LED,LOW);
  }
  delay(1000);
}
