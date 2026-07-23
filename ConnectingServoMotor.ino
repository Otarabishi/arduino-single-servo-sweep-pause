#include <Servo.h>

Servo myServo;  

const int servoPin = 13;  

void setup() {
  myServo.attach(servoPin);
 
}
void loop() {
  
  for (int angle = 0; angle <= 180; angle += 1) {
    myServo.write(angle);
    delay(15);  
  }
  
  delay(3000);  
 
}