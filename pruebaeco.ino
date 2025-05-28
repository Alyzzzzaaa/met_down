// Arduino UNO

void setup() {
  Serial.begin(9600); // Inicializa la comunicación serial a 9600 baudios
}

void loop() {
  if (Serial.available() > 0) {
    // Lee el dato entrante:
    char dato = Serial.read();

    // Procesa el dato recibido:
    if (dato == 'A') {
      Serial.println("Arduino recibió A");
      // Realiza alguna acción específica aquí
    } else if (dato == 'B') {
      Serial.println("Arduino recibió B");
      // Realiza otra acción específica aquí
    } else {
      Serial.print("Arduino recibió: ");
      Serial.println(dato);
    }
  }

  // Envía datos al Raspberry Pi Pico (opcional):
  Serial.println("Hola desde Arduino!");
  delay(1000); // Espera 1 segundo
}