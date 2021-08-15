# Two-motors-with-L293D-for-robot-wheels
Controling two DC motors with H-Bridge to allow robot wheels moving forward and backward and control the motors speed.

## **Circuit components:**
- One Arduino Uno R3.
- Two DC motors.
- One 9 volts Battery.
- One H-bridge Motor Drive.
- Breadboard.
- Wires.

## **STEPS:**

1. Creating a new Circuit at TINKERCAD(https://www.tinkercad.com/dashboard).

---

2. Connecting the circuit diagram.

 <img width="1129" alt="Screen Shot 1442-12-17 at 4 47 24 AM" src="https://user-images.githubusercontent.com/86277104/127082007-133d0ddc-0227-4619-a944-215b384a323d.png">

---

3. Programing the circuit using C++ to control the motors in clockwise and counter clockwise direction and control motors speed, by using the following code:

```
// C++ code
//Lower Motor:
#define Ena 10
#define IN1 9
#define IN2 8
//Upper Motor:
#define Enb 11
#define IN3 12
#define IN4 13
//To control speed and directions(moving clockwise or counterclockwise)
int Speed1=70;
int Direc1=1;
int Direc2=0;

int Speed2=70;
int Direc3=1;
int Direc4=0;


void setup()
{
  pinMode(Ena, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(Enb, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop()
{
 //Lower Motor:
  digitalWrite(IN1, Direc1);
  digitalWrite(IN2, Direc2);
  analogWrite(Ena, Speed1);
  delay(1000); // 1000 ms = 1 second
  //Upper Motor:
  digitalWrite(IN3, Direc3);
  digitalWrite(IN4, Direc4);
  analogWrite(Enb, Speed2);
  delay(1000); // 1000 ms = 1 second
}
```

---

**- The Output:** 

https://user-images.githubusercontent.com/86277104/127083516-82da4133-c39f-4aea-8ebd-3b175f444f72.mov



## Simulation:
https://www.tinkercad.com/things/gsLVY9bMnYA-funky-blorr/editel
