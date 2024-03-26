// Constants declaration
const int signalPin = 5;    // Output pin for square wave signal
const int measurePin = 4;   // Input pin to measure amplitude
const int LedR = 2; // Red LED pin
const int LedV = 1; // Green LED pin

void setup() {
  // Set pin modes
  pinMode(signalPin, OUTPUT);
  pinMode(measurePin, INPUT);
  pinMode(LedR, OUTPUT);
  pinMode(LedV, OUTPUT);
  // Initialize serial communication
  Serial.begin(115200);
}

void loop() {
    digitalWrite(LedR,LOW); // Indicate scan initiation
    
    digitalWrite(signalPin, HIGH); // Generate square wave signal
    int humidity = analogRead(measurePin); // Read humidity value
    
    // Compute average humidity over 10 readings
    for (int i = 0; i < 10; i++) {
      humidity = int((humidity + analogRead(measurePin))/2); // Empirical averaging over 10 readings
      delayMicroseconds(50);
    }
    digitalWrite(signalPin, LOW); // End square wave signal
    
    // Print humidity value to serial monitor
    Serial.print("Humidity = ");
    Serial.println(humidity);

    // Alert user based on humidity levels
    if (humidity > 1100) {
      digitalWrite(LedR, HIGH); // Turn on red LED for 1 second
      delay(1000);
      digitalWrite(LedR, LOW); // Turn off red LED
    } else {
      if (humidity < 400) {
        // Blink red LED rapidly if humidity is low
        for (int i = 0; i < 15; i++) {
          digitalWrite(LedR, HIGH);
          delay(50);
          digitalWrite(LedR, LOW);
          delay(50);
        }
      } else {
        // If humidity is within normal range, blink green LED once
        digitalWrite(LedV, LOW);
        digitalWrite(LedV, HIGH);
        delay(1000);
        digitalWrite(LedV, LOW);
      }
    }
  
  // Delay for a second before the next reading
  delay(100);
}
