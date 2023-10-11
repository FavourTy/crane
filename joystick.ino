#include <Servo.h>
int xAxis = A0;
int yAxis = A1;
int myServoPin1 = 3;
int myServoPin2 = 4;
Servo myServo1;
Servo myServo2;
int servoAxis1 = 90;
int servoAxis2 = 90;
void setup() {
  Serial.begin(9600);
  myServo1.attach(myServoPin1);
  myServo2.attach(myServoPin2);
  myServo1.write(90);
  myServo2.write(90);

}
void loop() {
  if (analogRead(xAxis) < 200 && servoAxis1 < 180) {
    servoAxis1++;
    myServo1.write(servoAxis1);
     Serial.println("im on servoAxis1++");
  } if (analogRead(xAxis) > 700 && servoAxis1 > 0) {
    servoAxis1--;
    myServo1.write(servoAxis1);
    Serial.println("im on servoAxis1--");
  }


  if (analogRead(yAxis) < 200 && servoAxis2 < 180) {
    servoAxis2++;
    myServo2.write(servoAxis2);
     Serial.println("im on servoAxis2++");
  } if (analogRead(yAxis) > 700 && servoAxis2 > 0) {
    servoAxis2--;
    myServo2.write(servoAxis2);
     Serial.println("im on servoAxis1--");
  }
  delay(15);
}
