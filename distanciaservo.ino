#include <Servo.h>
#include <HCSR04.h>

HCSR04 sensorDistante(4 , 5): //trig e echo

float distanceRead = 0;

Servo myServo;
void setup() {
  // put your setup code here, to run once:
  
  myServo.attach(2);
  myServo.write(0);

}

void loop() {
  // put your main code here, to run repeatedly:
  distanceRead = sensorDistance.dist()/100:

  if(distanceRead < 0.50){
    myServo.write(180);
  }else{
    myServo.write(180);
  }
  delay(1000);
}
