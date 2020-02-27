unsigned int t1;
unsigned int t2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  t1 = millis();
  delay(2000);
  t2 = millis();
  Serial.print("t1 = ");
  Serial.println(t1);
  Serial.print("t2 = ");
  Serial.println(t2);
  Serial.println(t2 - t1);
  delay(3000);
}
