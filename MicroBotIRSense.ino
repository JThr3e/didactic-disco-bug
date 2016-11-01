int p = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int f = analogRead(A0);
  if(f < 130)backUp();
}

void backUp()
{
  Serial.println("Backup1");
  delay(100);
  Serial.println("Backup2");
  delay(100);
  Serial.println("Backup3");
  delay(100);
}

