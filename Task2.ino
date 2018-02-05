#include <Servo.h>

Servo servo_right;  //Servo objects for pre-installed servo library
Servo servo_left;
int w, a, s, d = 0; //Represent direction commands

void setup(){       
        servo_right.attach(9); //Attach servo to I/O pins
        servo_left.attach(10);
        Serial.begin(115200);   //Mind the baud rate
}

void loop(){
        int bytes = Serial.available(); //byte count received from serial
        if (Serial.available() > 3){
                byte value[bytes];     //store received message in array
                for(int i = 0; i < bytes; i ++){
                        value[i] = Serial.read()-'0'; //decode bytes to integer
                        w = value[0];  //forward_button pressed = 0 or 1
                        a = value[1];
                        s = value[2];
                        d = value[3];
                }
         //  TODO: determine where the vehicle should go after receiving commands.
}
