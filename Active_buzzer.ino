int active_buzzer =11;// connect the active buzzer to the pin 7 of Arduino.
void setup() {
  
pinMode(active_buzzer,OUTPUT);
}

void loop() {
  digitalWrite(active_buzzer,HIGH);
  delay(5);
  digitalWrite(active_buzzer,LOW);
  delay(1);
}
