//Prueba en Arduino UNO/Nano
//Generación de tonos

#define LEDTONE 5

void setup() {
  pinMode(LEDTONE,OUTPUT);digitalWrite(LEDTONE,LOW);
}

void loop() {
  tone(LEDTONE,31);//Enviar a pin 5 una señal a 31 Hz (mínimo posible)
  delay(1000);noTone(LEDTONE);//Detener la generación de la señal
  tone(LEDTONE,62);//Enviar a pin 5 una señal a 62 Hz
  delay(1000);noTone(LEDTONE);//Detener la generación de la señal
  tone(LEDTONE,93);//Enviar a pin 5 una señal a 93 Hz
  delay(1000);noTone(LEDTONE);//Detener la generación de la señal
  //Nota: no se pueden enviar tonos simultáneos.
}
