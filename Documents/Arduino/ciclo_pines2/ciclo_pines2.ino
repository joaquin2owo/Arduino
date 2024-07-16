void setup() {
  // Configurar todos los pines del 0 al 13 como salidas digitales
  for (int i = 0; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // Encender todos los pines digitales
  for (int i = 0; i <= 13; i++) {
    digitalWrite(i, HIGH);
    delay(500);  // Esperar 500 milisegundos (0.5 segundos)
  }

  // Apagar todos los pines digitales
  for (int i = 0; i <= 13; i++) {
    digitalWrite(i, LOW);
    delay(500);  // Esperar 500 milisegundos (0.5 segundos)
  }
}

