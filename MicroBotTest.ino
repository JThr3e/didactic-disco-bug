void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  clrAct();
  delay(500);
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  delay(1000);
  clrAct();
  delay(500);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  delay(1000);
  clrAct();
  delay(500);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  delay(1000);
  clrAct();
  delay(500);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(1000);

}

void clrAct() {
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
}

