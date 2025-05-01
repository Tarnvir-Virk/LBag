
int lightSensorPin = A2;

int led12 = 12;

int ledA5 = A5;
int led6 = 6;

void setup() {
  // put your setup code here, to run once:

  pinMode(led12, OUTPUT);

  pinMode(ledA5, OUTPUT);
  pinMode(led6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  if (analogRead(lightSensorPin) < 30) {

    digitalWrite(led12, HIGH);

    digitalWrite(ledA5, HIGH);
    digitalWrite(led6, HIGH);

  }
  else if (analogRead(lightSensorPin) < 65) {

    digitalWrite(led12, HIGH);

    digitalWrite(ledA5, HIGH);
    digitalWrite(led6, LOW);

  }
  else if (analogRead(lightSensorPin) < 100) {

    digitalWrite(led12, LOW);

    digitalWrite(ledA5, LOW);
    digitalWrite(led6, HIGH);

  }
  else {

    digitalWrite(led12, LOW);

    digitalWrite(ledA5, LOW);
    digitalWrite(led6, LOW);

  }
}
