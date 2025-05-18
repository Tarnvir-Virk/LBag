
// Light Sensor pin
int lightSensorPin = A2;

// On board LED pin
int onBoardRedLED = 12;

// LED pins
int redLED = A5;
int yellowLED = 6;

void setup() {
  // put your setup code here, to run once:

  // set LED pinmode
  pinMode(onBoardRedLED, OUTPUT);

  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // if light sensor reading in less than 30, turn on these LEDs
  if (analogRead(lightSensorPin) < 30) {
    
    // turn on all LEDs
    digitalWrite(onBoardRedLED, HIGH);

    digitalWrite(redLED, HIGH);
    digitalWrite(yellowLED, HIGH);

  }
  // if light sensor reading is between 30 and 65, turn on these LEDs
  else if (analogRead(lightSensorPin) < 65) {

    // turn on red LEDs
    digitalWrite(onBoardRedLED, HIGH);

    digitalWrite(redLED, HIGH);
    digitalWrite(yellowLED, LOW);

  }
  // if light sensor reading is between 65 and 100, turn on these LEDs
  else if (analogRead(lightSensorPin) < 100) {

    // turn on yellow LEDs
    digitalWrite(onBoardRedLED, LOW);

    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, HIGH);

  }
  // if not dark enough
  else {

    // turn off all LEDs
    digitalWrite(onBoardRedLED, LOW);

    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, LOW);

  }
}
