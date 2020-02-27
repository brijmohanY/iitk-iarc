int Output = 10;
unsigned int frequency = 0;
# define s2 4
# define s3 5
# define s0 2
# define s1 3

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(10,INPUT);
  digitalWrite(s0,HIGH);
  digitalWrite(s1,LOW);  // setting frequencty selection to 20%
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("R = ");
  digitalWrite(s2,LOW);
  digitalWrite(s3,HIGH);  
  frequency = pulseIn(Output,LOW);
  Serial.print(frequency);

  
  
  Serial.print("     ");
  Serial.print("G = ");
  digitalWrite(s2,HIGH);
  digitalWrite(s3,HIGH);  
  frequency = pulseIn(Output,LOW);
  Serial.print(frequency);
  delay(100);



delay(500);
  Serial.print("\n");
  
}
