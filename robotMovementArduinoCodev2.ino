#include <AFMotor.h>

#define trigPin 10
#define echoPin 9

AF_DCMotor motor2(2, MOTOR12_1KHZ);
AF_DCMotor motor3(3, MOTOR34_1KHZ);

bool exitCheckAndMove = false;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();
    Stop(); // initialize with motors stopped

    // Keep the existing functionality for other commands
    switch (command) {
      case 'F':
        forward();
        break;
      case 'B':
        back();
        break;
      case 'S':
        Stop();
        break;
      // Turn Right - Angles
      case 'E':
        turnRight45(); // Turn Right 45 degrees
        break;
      case 'D': // Turn Right 90 degrees
        turnRight90();
        break;
      case 'C': // Turn Right 135 degrees
        turnRight135();
        break;
      case 'X': // Turn Right 180 degrees
        turnRight180();
        break;
      case 'Z': // Turn Right 255 degrees
        turnRight225();
        break;
      case 'A': // Turn Right 270 degrees
        turnRight270();
        break;
      case 'Q': // Turn Right 315 degrees
        turnRight315();
        break;
      case 'W': // Turn Right 360 degrees
        turnRight360();
        break;

      // Turn Left - Angles
      case 'U':
        turnLeft45(); // Turn Right 45 degrees
        break;
      case 'J': // Turn Right 90 degrees
        turnLeft90();
        break;
      case 'M': // Turn Right 135 degrees
        turnLeft135();
        break;
      case ',': // Turn Right 180 degrees
        turnLeft180();
        break;
      case '.': // Turn Right 255 degrees
        turnLeft225();
        break;
      case 'L': // Turn Right 270 degrees
        turnLeft270();
        break;
      case 'O': // Turn Right 315 degrees
        turnLeft315();
        break;
      case 'I': // Turn Right 360 degrees
        turnLeft360();
        break;

      // Obstacle Detection
      case 'R':
        objBackwardElseForward();
        break;
      case 'T':
        objLeftElseForward();
        break;
      case 'Y':
        objRightElseForward();
        break;
    }
  }
}

// Motor control functions remain the same as in the original code
void forward() {
  motor2.setSpeed(205);
  motor2.run(FORWARD);
  motor3.setSpeed(165);
  motor3.run(FORWARD);
}

void back() {
  motor2.setSpeed(202);
  motor2.run(BACKWARD);
  motor3.setSpeed(165);
  motor3.run(BACKWARD);
}

// Turn Right Movements

void turnRight45() {
  Serial.println("Turning right 45 degrees.");
  motor2.setSpeed(255);
  motor2.run(FORWARD);
  motor3.setSpeed(255);
  motor3.run(BACKWARD);
  delay(450); // Adjust the delay as needed
  Stop();
}

void turnRight90() {
  Serial.println("Turning right 90 degrees.");
  motor2.setSpeed(255);
  motor2.run(FORWARD);
  motor3.setSpeed(255);
  motor3.run(BACKWARD);
  delay(650); // Adjust the delay as needed
  Stop();
}

void turnRight135() {
  Serial.println("Turning right 135 degrees.");
  motor2.setSpeed(255);
  motor2.run(FORWARD);
  motor3.setSpeed(255);
  motor3.run(BACKWARD);
  delay(850); // Adjust the delay as needed
  Stop();
}

void turnRight180() {
  Serial.println("Turning right 180 degrees.");
  motor2.setSpeed(255);
  motor2.run(FORWARD);
  motor3.setSpeed(255);
  motor3.run(BACKWARD);
  delay(1050); // Adjust the delay as needed
  Stop();
}

void turnRight225() {
  Serial.println("Turning right 225 degrees.");
  motor2.setSpeed(255);
  motor2.run(FORWARD);
  motor3.setSpeed(255);
  motor3.run(BACKWARD);
  delay(1350); // Adjust the delay as needed
  Stop();
}

void turnRight270() {
  Serial.println("Turning right 270 degrees.");
  motor2.setSpeed(255);
  motor2.run(FORWARD);
  motor3.setSpeed(255);
  motor3.run(BACKWARD);
  delay(1550); // Adjust the delay as needed
  Stop();
}

void turnRight315() {
  Serial.println("Turning right 315 degrees.");
  motor2.setSpeed(255);
  motor2.run(FORWARD);
  motor3.setSpeed(255);
  motor3.run(BACKWARD);
  delay(1850); // Adjust the delay as needed
  Stop();
}

void turnRight360() {
  Serial.println("Turning right 360 degrees.");
  motor2.setSpeed(255);
  motor2.run(FORWARD);
  motor3.setSpeed(255);
  motor3.run(BACKWARD);
  delay(2050); // Adjust the delay as needed
  Stop();
}

// Turn Left Movement

void turnLeft45() {
  Serial.println("Turning left 45 degrees.");
  motor2.setSpeed(255);
  motor2.run(BACKWARD);
  motor3.setSpeed(255);
  motor3.run(FORWARD);
  delay(450); // Adjust the delay as needed
  Stop();
}

void turnLeft90() {
  Serial.println("Turning left 90 degrees.");
  motor2.setSpeed(255);
  motor2.run(BACKWARD);
  motor3.setSpeed(255);
  motor3.run(FORWARD);
  delay(650); // Adjust the delay as needed
  Stop();
}

void turnLeft135() {
  Serial.println("Turning left 135 degrees.");
  motor2.setSpeed(255);
  motor2.run(BACKWARD);
  motor3.setSpeed(255);
  motor3.run(FORWARD);
  delay(850); // Adjust the delay as needed
  Stop();
}

void turnLeft180() {
  Serial.println("Turning left 180 degrees.");
  motor2.setSpeed(255);
  motor2.run(BACKWARD);
  motor3.setSpeed(255);
  motor3.run(FORWARD);
  delay(1050); // Adjust the delay as needed
  Stop();
}


void turnLeft225() {
  Serial.println("Turning left 225 degrees.");
  motor2.setSpeed(255);
  motor2.run(BACKWARD);
  motor3.setSpeed(255);
  motor3.run(FORWARD);
  delay(1350); // Adjust the delay as needed
  Stop();
}

void turnLeft270() {
  Serial.println("Turning left 270 degrees.");
  motor2.setSpeed(255);
  motor2.run(BACKWARD);
  motor3.setSpeed(255);
  motor3.run(FORWARD);
  delay(1550); // Adjust the delay as needed
  Stop();
}

void turnLeft315() {
  Serial.println("Turning left 315 degrees.");
  motor2.setSpeed(255);
  motor2.run(BACKWARD);
  motor3.setSpeed(255);
  motor3.run(FORWARD);
  delay(1850); // Adjust the delay as needed
  Stop();
}

void turnLeft360() {
  Serial.println("Turning left 360 degrees.");
  motor2.setSpeed(255);
  motor2.run(BACKWARD);
  motor3.setSpeed(255);
  motor3.run(FORWARD);
  delay(2050); // Adjust the delay as needed
  Stop();
}

void Stop() {
  motor2.setSpeed(0);
  motor2.run(RELEASE);
  motor3.setSpeed(0);
  motor3.run(RELEASE);
}

void right(){
  motor2.setSpeed(255);
  motor2.run(FORWARD);
  motor3.setSpeed(255);
  motor3.run(BACKWARD);
}

void left(){
  motor2.setSpeed(255);
  motor2.run(BACKWARD);
  motor3.setSpeed(255);
  motor3.run(FORWARD);
}

void objBackwardElseForward() {
  while (!exitCheckAndMove) {
    if (Serial.available() > 0) {
      // If a new serial character is available, set the flag to exit the loop
      exitCheckAndMove = true;
    }

    if (checkObstacle()) {
      Serial.println("Obstacle detected! Turning right.");
      back();
      delay(500); // Adjust the delay as needed
    } else {
      Serial.println("No obstacle detected. Moving forward.");
      forward();
    }
  }

  // Reset the flag for the next iteration or command
  exitCheckAndMove = false;
}



void objLeftElseForward() {
  while (!exitCheckAndMove) {
    if (Serial.available() > 0) {
      // If a new serial character is available, set the flag to exit the loop
      exitCheckAndMove = true;
    }

    if (checkObstacle()) {
      Serial.println("Obstacle detected! Turning left.");
      left();
      delay(500); // Adjust the delay as needed
    } else {
      Serial.println("No obstacle detected. Moving forward.");
      forward();
    }
  }

  // Reset the flag for the next iteration or command
  exitCheckAndMove = false;
}

void objRightElseForward() {
  while (!exitCheckAndMove) {
    if (Serial.available() > 0) {
      // If a new serial character is available, set the flag to exit the loop
      exitCheckAndMove = true;
    }

    if (checkObstacle()) {
      Serial.println("Obstacle detected! Turning right.");
      right();
      delay(500); // Adjust the delay as needed
    } else {
      Serial.println("No obstacle detected. Moving forward.");
      forward();
    }
  }
  // Reset the flag for the next iteration or command
  exitCheckAndMove = false;
}

bool checkObstacle() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;

  if (distance < 25) {
    Serial.println("Close Obstacle detected!");
    Serial.print("Distance From Robot is ");
    Serial.print(distance);
    Serial.println(" CM!");
    Serial.println("The obstacle is declared a threat due to close distance.");
    return true; // Obstacle detected
  } else {
    return false; // No obstacle detected
  }
}

