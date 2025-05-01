
int lightSensorPin = A2;

int ledA5 = A5;
int led6 = 6;

void setup() {
  // put your setup code here, to run once:

  pinMode(ledA5, OUTPUT);
  pinMode(led6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  if (analogRead(lightSensorPin) < 20) {

    digitalWrite(ledA5, HIGH);
    digitalWrite(led6, HIGH);

  }
  else if (analogRead(lightSensorPin) < 50) {

    digitalWrite(ledA5, HIGH);
    digitalWrite(led6, LOW);

  }
  else if (analogRead(lightSensorPin) < 80) {

    digitalWrite(ledA5, LOW);
    digitalWrite(led6, HIGH);

  }
  else {

    digitalWrite(ledA5, LOW);
    digitalWrite(led6, LOW);

  }
}
