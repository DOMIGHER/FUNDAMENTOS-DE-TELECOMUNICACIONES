#define CLOCK 3    
#define LATCH 4
#define DATA 5

void setup() {

pinMode(CLOCK,OUTPUT);digitalWrite(CLOCK,LOW);
pinMode(LATCH,OUTPUT);digitalWrite(LATCH,HIGH);
pinMode(DATA,OUTPUT);digitalWrite(DATA,LOW);
}

int pot=0,bin=0;

void loop() {
pot =analogRead(A0);delay(50);
bin = map(pot,0,1023,0,255);

  digitalWrite(LATCH,LOW);

  shiftOut(DATA,CLOCK,MSBFIRST,bin);

  digitalWrite(LATCH,HIGH);delay(50);

}
