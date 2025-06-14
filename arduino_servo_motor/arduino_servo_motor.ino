#include <SoftwareSerial.h>
#include <AFMotor.h>
#include <Servo.h>

Servo servo_1;
Servo servo_2;
#define servoPin1 9
#define servoPin2 10

int currentAngle =90;





// Define SoftwareSerial RX and TX pins for Arduino Uno
#define RXD 0   // Receive Pin (connected to ESP32 TX)
#define TXD 1   // Transmit Pin (connected to ESP32 RX)

SoftwareSerial mySerial(RXD, TXD);

void setup() {
  // Initialize hardware Serial for debugging

  
  // Initialize SoftwareSerial for communication with ESP32
  Serial.begin(115200);
  mySerial.begin(9600);
  
  servo_1.attach(servoPin1);
  servo_2.attach(servoPin2);
  
  servo_1.write(currentAngle);
  servo_2.write(currentAngle);
 
}

void loop() {
  // Check if data is available from ESP32
  Serial.println(Serial.available());
  if (mySerial.available()>0) {
    // Read the incoming command
    Serial.println("entry");
    char command = mySerial.read();

    // Debugging output
    Serial.println("Command received: ");
    Serial.println(command);

    // Execute a command (for example, turning ON an LED)
   if (command == 'F') {
      // Move the motor forward
       Serial.println("hiii");
       currentAngle = 45; // Move to 45 degrees (clockwise)
       servo_1.write(currentAngle); 
      } else if (command == 'B') {
       // Move the motor backward
         currentAngle = 135; // Move to 135 degrees (counterclockwise)
         servo_1.write(currentAngle);
        
        } else if (command == 'L') {
       // Move the motor backward
         

            currentAngle = 45; // below 90 degrees (clockwise)
            servo_2.write(currentAngle);

             // Run motor backward
      // Run motor backward
        } else if (command == 'R') {
            // Run motor backward
            currentAngle = 135; // above 90 degrees and above 120 (counterclockwise)
            servo_2.write(currentAngle);

      }
       else if (command == 'S') {
      currentAngle = 90; // Reset to neutral position
      servo_2.write(currentAngle);
      servo_1.write(currentAngle);
     }


  }

  delay(100);  // Small delay to avoid spamming
}
