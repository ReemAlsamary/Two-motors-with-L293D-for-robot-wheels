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