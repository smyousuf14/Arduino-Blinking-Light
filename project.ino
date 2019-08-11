void setup() {
  // Initialize digital pin LED_BUILTIN as an output
  pinMode(LED_BUILTIN,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN,HIGH);
  delay(50);
  digitalWrite(LED_BUILTIN, LOW);
  delay(50);

}
