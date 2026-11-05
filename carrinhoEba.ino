long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

int cmd;
void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  cmd=0.01723 * readUltrasonicDistance(12, 10);
  Serial.println(cmd);

  digitalWrite(3,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);

  if(cmd<15){
    digitalWrite(3,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    delay(500);


    long aleatorio=random(1,3);
    if(aleatorio==1){
      digitalWrite(3,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      delay(500);
    }
    if(aleatorio==2){
      digitalWrite(3,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      delay(500);

    }
  }
}