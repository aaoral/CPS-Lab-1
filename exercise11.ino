

void setup() {
  
  pinMode(6, OUTPUT);
  Serial.begin(9600);
  analogReadResolution(12);
}


void loop() {
  digitalWrite(6, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(6, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second

  int sensval = analogRead(A1);
  Serial.println(sensval);
  delay(1000);
}
