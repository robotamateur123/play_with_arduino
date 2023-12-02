// Define the pin numbers for the components
int BUZZ_PIN = 9;  // Pin number for the buzzer
int PIR_PIN = 3;   // Pin number for the PIR sensor
int LED_PIN = 5;   // Pin number for the LED

int pirState;  // Variable to hold the state of the PIR sensor

void setup() {
  // Set the pinMode for each pin
  pinMode(PIR_PIN, INPUT);   // PIR_PIN is set as an input for the sensor
  pinMode(BUZZ_PIN, OUTPUT); // BUZZ_PIN is set as an output for the buzzer
  pinMode(LED_PIN, OUTPUT);  // LED_PIN is set as an output for the LED
}

void loop() {
  // Continuously check the state of the PIR sensor
  pirState = digitalRead(PIR_PIN); // Read the state of the PIR sensor and store it

  // If the PIR sensor detects motion (HIGH state), activate buzzer and LED
  if(pirState == HIGH){
    digitalWrite(BUZZ_PIN, HIGH); // Turn on the buzzer
    digitalWrite(LED_PIN, HIGH);  // Turn on the LED
  }
  // If no motion is detected (LOW state), turn off buzzer and LED
  else{
    digitalWrite(BUZZ_PIN, LOW); // Turn off the buzzer
    digitalWrite(LED_PIN, LOW);  // Turn off the LED
  }
}
