/*
    Project name : ESP32 Flex Sensor
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-flex-sensor
*/

const int flexSensorPin = 34; // Analog pin connected to the flex sensor

void setup() {
  Serial.begin(115200); // Initialize serial communication
}

void loop() {
  int flexValue = analogRead(flexSensorPin); // Read the analog value from the flex sensor

  // Print the flex sensor value to the Serial Monitor
  Serial.print("Flex Sensor Value: ");
  Serial.println(flexValue);

  delay(500); // Add a small delay to avoid spamming the Serial Monitor
}
