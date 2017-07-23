const int pino =  8;

void setup() {
  Serial.begin(9600);
  pinMode(pino, OUTPUT);
  digitalWrite(pino, LOW);
}
void loop() {
  char dado;

  if(Serial.available()){
    dado = Serial.read();
    if (dado == 'a'){
      Serial.println("Comando recebido");
      digitalWrite(pino, HIGH);
      delay(1000);
      digitalWrite(pino, LOW);
    }
  }
  
}
