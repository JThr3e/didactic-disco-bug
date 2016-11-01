int sig;
int i;
int r;
int minTime;
int maxTime;
void setup() {
  // put your setup code here, to run once:
  i = 0;
  minTime = 20000;
  maxTime = 30000;
  r = random(minTime,maxTime);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  sig = analogRead(A0);
  i++;
  
  if(sig < 130){
    i = 0;
    backUp();
  }
  else{
    if(i < r) forward();
    else{
      i = 0;
      r = random(minTime,maxTime);
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
  analogWrite(3, 255);
  analogWrite(6, 255);
}

void right(){
  clrAct();
  digitalWrite(3, 255);
  digitalWrite(5, 255);
  delay(400);
  clrAct();
}

void left(){
  clrAct();
  digitalWrite(6, 255);
  digitalWrite(9, 255);
  delay(400);
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


