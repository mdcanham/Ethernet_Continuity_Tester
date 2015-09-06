int rP = 0;
int rN = 1;
int bP = 2;
int bN = 3;
int gP = 4;
int gN = 5;
int oP = 6;
int oN = 7;

int buzzPin = 9;

int rLedPin = 10;
int bLedPin = 11;
int gLedPin = 12;
int oLedPin = 13;

void setup() {
  pinMode(rP, OUTPUT);
  pinMode(rN, INPUT);
  pinMode(bP, OUTPUT);
  pinMode(bN, INPUT);
  pinMode(gP, OUTPUT);
  pinMode(gN, INPUT);
  pinMode(oP, OUTPUT);
  pinMode(oN, INPUT);
  
  pinMode(buzzPin, OUTPUT);

  pinMode(rLedPin, OUTPUT);
  pinMode(bLedPin, OUTPUT);
  pinMode(gLedPin, OUTPUT);
  pinMode(oLedPin, OUTPUT);
  
  digitalWrite(rP, HIGH);
  digitalWrite(bP, HIGH);
  digitalWrite(gP, HIGH);
  digitalWrite(oP, HIGH);

}

void loop() {
  int redLoop = digitalRead(rN);
  int blueLoop = digitalRead(bN);
  int greenLoop = digitalRead(gN);
  int orangeLoop = digitalRead(oN);
  
  if(redLoop == HIGH){
    digitalWrite(rLedPin, HIGH);
    buzz();
  } else {
    digitalWrite(rLedPin, LOW);
  }
  
  if(blueLoop == HIGH){
    digitalWrite(bLedPin, HIGH);
    buzz();
  } else {
    digitalWrite(bLedPin, LOW);
  }
  
  if(greenLoop == HIGH){
    digitalWrite(gLedPin, HIGH);
    buzz();
  } else {
    digitalWrite(gLedPin, LOW);
  }
  
  if(orangeLoop == HIGH){
    digitalWrite(oLedPin, HIGH);
    buzz();
  } else {
    digitalWrite(oLedPin, LOW);
  }
  
  if(redLoop == LOW && blueLoop == LOW && greenLoop == LOW && orangeLoop == LOW){
    noTone(buzzPin);
  }
  
}

void buzz() {
  tone(buzzPin, 400);
}
