int f;
int i;
void setup() {
  // put your setup code here, to run once:
  i = 0;
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  i++;
  int x = i/1000;
  int r = random(15,20);
  Serial.println(x);
  f = analogRead(A0);
  if(f < 130)backUp();
  else{
    if(x < r) forward();
    else{
      i = 0;
      randomTurn();
    }
  }
}

void randomTurn(){
  int i = random(0,2);
  if(i == 0)
  {
    right();
  }
  else left();
}

void forward(){
  analogWrite(3, 246);
  analogWrite(6, 255);
}

void right(){
  clrAct();
  digitalWrite(3, 255);
  digitalWrite(5, 255);
  delay(300);
  clrAct();
}

void left(){
  clrAct();
  digitalWrite(6, 255);
  digitalWrite(9, 255);
  delay(300);
  clrAct();
}

void clrAct() {
  digitalWrite(3, LOW); //FL
  digitalWrite(5, LOW); //BR
  digitalWrite(6, LOW); //FR
  digitalWrite(9, LOW); //BL
}

void backUp()
{
  int i = random(0,2);
  if(i == 0)
  {
    clrAct();
    digitalWrite(5, 255);
    delay(1000);
    clrAct();
  }
  else{
    clrAct();
    digitalWrite(9, 255);
    delay(1000);
    clrAct();
  }
  
}


