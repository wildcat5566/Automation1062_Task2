# Automation1062_Task2

## Task requests
### Vehicle motion control based on Raspberry pi and Arduino I/O interfaces.  <br />
- Buttons: on Raspberry Pi. <br />
- Indicator lights: on Raspberry Pi. <br />
- Servo motors: on Arduino. <br />
 <br />
 
![alt text](./src/mission.jpg) <br />

### Communication
- Via serial port. <br />
 <br />
 
### Raspberry Pi I/O Libraries
- Python + RPi.GPIO <br />
- C + BCM2835 <br />
- C + WiringPi <br />
 <br />
 
## Task setup
### Install Arduino
$ sudo apt-get -y install arduino <br />

### Install pip3
$ sudo apt-get update <br />
$ sudo apt-get -y install python3-pip <br />
$ pip3 install pyserial <br />
$ pip3 install python3-rpi.gpio <br />
 <br />
 
## Additional: Arduino make tool
$ sudo apt-get -y install build-essential <br />
$ sudo apt-get -y install arduino-core arduino-mk <br />
 <br />
 
### Take a look at the "big" makefile.
$ nano /usr/share/arduino/Arduino.mk
![alt text](./src/makefile.jpg) <br />

### Create project folder.
![alt text](./src/ino.jpg) <br />
$ mkdir task2 <br />
$ cd task2 <br />
$ nano task2.ino <br />
 <br />
 
### Create a "small" makefile in project folder.
$ nano Makefile <br />
When building, the make tool t akes the "makefile" as an input. <br />
The contents of Makefile is are just like the settings we make using the IDE. <br />
 <br />
### Build project.
![alt text](./src/build-uno.jpg) <br />
$ make <br />
Keep an eye on if any error messages are displayed. <br />
A "build-uno" folder will appear in the project folder. <br />
 <br />
### Upload to board.
$ sudo make upload <br />
 <br />
### Monitoring
$ stty -F /dev/ttyACM0 115200 raw -clocal –echo <br />
$ cat /dev/ttyACM0 <br />
