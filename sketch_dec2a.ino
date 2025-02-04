// Define pin connections
const int pwmR = 5;  // PWM pin for moving actuator in one direction
const int pwmL = 12; // PWM pin for moving actuator in the opposite direction

// Define actuator control variables
const int actuatorSpeed = 128; // Speed value (0-255), adjust as needed

void setup() {
  // Set the PWM pins as outputs
  pinMode(pwmR, OUTPUT);
  pinMode(pwmL, OUTPUT);

  // Start with actuator stopped
  analogWrite(pwmR, 0);
  analogWrite(pwmL, 0);
}

void loop() {
  // Move actuator forward
  analogWrite(pwmR, actuatorSpeed);
  analogWrite(pwmL, 0);
  delay(2000); // Move forward for 2 seconds

  // Stop the actuator
  analogWrite(pwmR, 0);
  analogWrite(pwmL, 0);
  delay(1000); // Wait for 1 second

  // Move actuator in reverse
  analogWrite(pwmR, 0);
  analogWrite(pwmL, actuatorSpeed);
  delay(2000); // Move in reverse for 2 seconds

  // Stop the actuator
  analogWrite(pwmR, 0);
  analogWrite(pwmL, 0);
  delay(1000); // Wait for 1 second
}

