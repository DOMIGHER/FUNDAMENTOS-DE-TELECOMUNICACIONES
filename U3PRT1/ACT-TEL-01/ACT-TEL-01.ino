#define LEDSIGNAL1 6
#define LEDSIGNAL2 7

void setup() {
  
  pinMode(LEDSIGNAL1,OUTPUT);digitalWrite(LEDSIGNAL1,LOW);
  pinMode(LEDSIGNAL2,OUTPUT);digitalWrite(LEDSIGNAL2,LOW);
}

void loop() {
  tone(LEDSIGNAL2,100);//Generar señal cuadretica a 31 Hz(Minimo 31)
  noTone(LEDSIGNAL2);//Detener generacion

  digitalWrite(LEDSIGNAL1,HIGH);
  delay(500);
  digitalWrite(LEDSIGNAL1,LOW);
  delay(500);

  
    
}
