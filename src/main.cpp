/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author HARSHIT SHARMA
 * @date 2026-02-27
 *
 * @details
* The MG995 is a high-torque servo motor used for precise angular movement.
*It can rotate approximately from 0° to 180°.
*It is commonly used in robotics and automation projects.
 */
#include <Servo.h>

Servo myServo;
void setup() {
 myServo.attach(9);
}
void loop() {
 myServo.write(0);
 delay(1000);

 myServo.write(90);
 delay(1000);myServo.write(90);
 delay(1000);

 myServo.write(180);
 delay(1000);
}