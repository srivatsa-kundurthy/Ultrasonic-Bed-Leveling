const int LED1 = 5;
const int LED2 = 6;
const int TRIGGER = 7;
const int ECHO = 8;



double distanceMeasure(int trigger, int echo){
  int distance = 0;
  // reset trigger
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  // send sound
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  // calculate distance using d = st, for calculated time / 2 and s = .034 cm / us
  distance = (pulseIn(echo, HIGH) / 2) * .034;
  return distance;
  
}

void setup() {
  Serial.begin(9600);
  pinMode(TRIGGER, OUTPUT);
  pinMode(ECHO, INPUT);
   

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(distanceMeasure(7,8));
  delay(100);

}
