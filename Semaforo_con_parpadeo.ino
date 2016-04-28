/*
  Semáforo que hace lo siguiente: Verde + amarillo + rojo + parpadeo en amarillo
 */
 
// Declaramos los 2 pines digitales y el entero que hará de contador en el bucle del loop
int ledv = 13;
int leda = 12;
int ledr = 11;
int i=0;

// Definimos los pines como salida (los de los leds)
void setup() {                
  // Los iniciamos.
  pinMode(ledv, OUTPUT);
  pinMode(leda, OUTPUT);
  pinMode(ledr, OUTPUT);
}

// Esto se repite infinitamente
void loop() {
  digitalWrite(ledv, HIGH);   // Enciendo verde
  delay(5000);               // Espero 5s
  digitalWrite(ledv, LOW);    // Apago verde
  delay(100);               // Espero 0.1s
  digitalWrite(leda, HIGH);
  delay(1000);
  digitalWrite(leda,LOW);
  delay(100);
  digitalWrite(ledr,HIGH);
  delay(2500);
  digitalWrite(ledr,LOW);
  delay(100);
  for (i=0;i<10;i++){ //Consigamos el parpadeo
    if(i%2==0){ //En las ocasiones pares lo enciende y se espera 0.5 segundos
      digitalWrite(leda,HIGH);
      delay(500);
    }
    else{ //en el resto lo apaga y se espera 0.5 segundos. 
      digitalWrite(leda,LOW);
      delay(500);
    }
  };
}
