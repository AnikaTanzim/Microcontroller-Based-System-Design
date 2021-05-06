const int trigPin=8;
const int echoPin=7;
  long duration, distance,inches,cm;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(20);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(50);
  digitalWrite(trigPin, LOW);

  duration=pulseIn(echoPin, HIGH);

  distance=(duration*0.034)/2;

  inches = microsecondsToInches(duration);
  cm= microsecondsToCentimeters(duration);
  Serial.print(inches);
  Serial.println("inches");

  Serial.print(cm);
  Serial.println("cm");
  Serial.println();
  Serial.println();
  delay(1000);
}

long microsecondsToInches(long microseconds){
  return microseconds/74/2;
}

long microsecondsToCentimeters(long microseconds){
  return microseconds/29/2;
}
