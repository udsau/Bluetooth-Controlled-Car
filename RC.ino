#include <SoftwareSerial.h>

// HC-05
SoftwareSerial BT(10, 11);  // RX, TX

// L293D Motor Driver
#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

// Failsafe timer variables
unsigned long lastCommandTime = 0;
const unsigned long TIMEOUT = 500; // Stop car if no command is received for 500 ms

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Stop motors initially
  stopCar();

  BT.begin(9600);
  Serial.begin(9600);
}

void loop() {

  if (BT.available()) {

    char command = BT.read();

    Serial.println(command);

    if (command == 'F' || command == 'f') {
      forward();
      lastCommandTime = millis();
    }

    else if (command == 'B' || command == 'b') {
      backward();
      lastCommandTime = millis();
    }

    else if (command == 'L' || command == 'l') {
      left();
      lastCommandTime = millis();
    }

    else if (command == 'R' || command == 'r') {
      right();
      lastCommandTime = millis();
    }

    else if (command == 'S' || command == 's') {
      stopCar();
      lastCommandTime = millis();
    }
  }

  // FAILSAFE: Stop motors automatically if Bluetooth loses connection or freezes
  if (millis() - lastCommandTime > TIMEOUT) {
    stopCar();
  }
}

// ---------------- MOTOR FUNCTIONS ----------------

void forward() {
  // Motor 1 forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  // Motor 2 forward
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void backward() {
  // Motor 1 backward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  // Motor 2 backward
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void left() {
  // Motor 1 backward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  // Motor 2 forward
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void right() {
  // Motor 1 forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  // Motor 2 backward
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stopCar() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
