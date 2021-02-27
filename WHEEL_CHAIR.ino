const int motorA1      = 11;  
const int motorA2      = 10;
const int motorB1      = 9;  
const int motorB2      = 8;
char command;

void setup() {
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);
  
  Serial.begin(9600);
  
}

void loop() {
  

  command=Serial.read();
  switch (command)
  { case 'F':forward();
            break;
    case 'R':turn_right();
            break;
    case 'L':turn_left();
             break;
    case 'S':stopping();
             break;
  }
}
void turn_left()
{
    Serial.println("turning left");
    digitalWrite (motorA1,LOW);
    digitalWrite(motorA2,LOW);
    digitalWrite (motorB1,HIGH);
    digitalWrite(motorB2,LOW);                      
}

void turn_right()
{
    Serial.println("turning right");
    digitalWrite (motorA1,HIGH);
    digitalWrite(motorA2,LOW);
    digitalWrite (motorB1,HIGH);
    digitalWrite(motorB2,HIGH);
}
void stopping()
{
    Serial.println("stop");
    digitalWrite (motorA2,LOW);
    digitalWrite(motorA1,LOW);
    digitalWrite (motorB2,LOW);
    digitalWrite(motorB1,LOW);
}
void forward()
{
    Serial.println("going forward");
    digitalWrite (motorA1,HIGH);
    digitalWrite(motorA2,LOW);
    digitalWrite (motorB1,HIGH);
    digitalWrite(motorB2,LOW);
}
