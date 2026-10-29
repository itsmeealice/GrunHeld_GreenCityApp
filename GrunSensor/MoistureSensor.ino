const int MOISTURE_PIN = 34;
const int GREEN_LED_PIN = 2; // Set Green PIN 

// Calibration values from your tissue test
const int DRY_VALUE = 3150;
const int WET_VALUE = 1441;

void setup() {
  Serial.begin(115200);
  pinMode(GREEN_LED_PIN, OUTPUT); // Green LED as Output
  delay(1000);
}

void loop() {
  // Check if the Android app sent a command
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    command.trim();
    
    if (command == "GET") {
      // Average 10 sensor readings
      long total = 0;
      const int samples = 10;

      for (int i = 0; i < samples; i++) {
        total += analogRead(MOISTURE_PIN);
        delay(10);
      }

      int raw = total / samples;

      // Calculate moisture percentage
      float moisturePercent =
          (float)(DRY_VALUE - raw) * 100.0 /
          (DRY_VALUE - WET_VALUE);

      // Keep percentage between 0 and 100
      moisturePercent = constrain(moisturePercent, 0.0, 100.0);

      // Turn on the Green pin if moisture over 70
      if (moisturePercent > 70.0) {
        digitalWrite(GREEN_LED_PIN, HIGH);
      } else {
        digitalWrite(GREEN_LED_PIN, LOW);
      }

      // Send only the percentage to the Android app
      Serial.println(moisturePercent, 1);
    }
  }
}