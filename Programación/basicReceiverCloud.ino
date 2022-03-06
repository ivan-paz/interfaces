const int motorPin = 3;
int valSenyal;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
  pinMode (5, INPUT_PULLUP);
  Serial.println("hola, comenzando");
}

void loop() {
  // put your main code here, to run repeatedly:

  valSenyal = digitalRead(5);
  Serial.println(valSenyal);


  if (valSenyal == 1) {
    vibrar();
  } else {
    noVibrar();
  }

}



void vibrar() {
  Serial.println("vibrando");
  digitalWrite(motorPin, HIGH);
  delay(1000);
  digitalWrite(motorPin, LOW);
  delay(5000);

}


void noVibrar() {
  Serial.println("no vibrando");
  digitalWrite(motorPin, LOW);
}
