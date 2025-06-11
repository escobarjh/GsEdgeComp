// Pinos do sensor HC-SR04
const int trigPin = 9;
const int echoPin = 10;

// Pino do buzzer
const int buzzerPin = 8;

// Variável para armazenar a distância
long duration;
float distance;

void setup() {
  // Inicializa comunicação serial
  Serial.begin(9600);
  
  // Define os modos dos pinos
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Gera pulso de 10 microsegundos no pino TRIG
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Lê o tempo de retorno do pulso
  duration = pulseIn(echoPin, HIGH);

  // Calcula a distância em cm
  distance = duration * 0.0343 / 2;

  // Exibe a distância no monitor serial
  Serial.print("Distância: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Verifica se a distância é menor que 20 cm
  if (distance < 20) {
    digitalWrite(buzzerPin, HIGH); // Ativa buzzer
  } else {
    digitalWrite(buzzerPin, LOW); // Desativa buzzer
  }

  delay(500); // Aguarda 0,5s antes de nova leitura
}
