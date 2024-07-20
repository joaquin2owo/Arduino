void setup() {
  // Configurar todos los pines del 0 al 13 como salidas digitales
  for (int i = 0; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // Encender todos los pines digitales
    delay(50);

    digitalWrite(0, HIGH);
    digitalWrite(12, HIGH);
   
    delay(100); 

    digitalWrite(0, LOW);
    digitalWrite(12, LOW);
   
    delay(100);


    digitalWrite(10, HIGH);
    digitalWrite(2, HIGH);

    delay(100);

    digitalWrite(10, LOW);
    digitalWrite(2, LOW);
  
    delay(100);

    digitalWrite(4, HIGH);
    digitalWrite(8, HIGH);
  
    delay(100);

    digitalWrite(4, LOW);
    digitalWrite(8, LOW);
  
    delay(100);

    digitalWrite(6, HIGH);
    delay(100);
    digitalWrite(6, LOW);

    delay(500);


}

