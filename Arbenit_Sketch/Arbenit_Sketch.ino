//Pins for controlling the three pairs of lights
const int LEDs[]    = {9, 5, 3};
//Pins for receiving the state of the three buttons
const int buttons[] = {8, 4, 2};
//Potentiometer
const int potPin = A6;

//Brightness for lights
int brightness = 0;


void setup() {
  //Lights
  pinMode(LEDs[0], OUTPUT);
  pinMode(LEDs[1], OUTPUT);
  pinMode(LEDs[2], OUTPUT);
  //Buttons
  pinMode(buttons[0], INPUT);
  pinMode(buttons[1], INPUT);
  pinMode(buttons[2], INPUT);
  //Potentiometer
  pinMode(potPin, INPUT);
}

void loop() {
  //read value of potentiometer, it returns 0-1023, brightness needs to be between 0-255, for that I divide it by 4
  brightness = analogRead(potPin) / 4;

  //For each button and light for the button
  for(int i = 0; i < 3; i++){
    if(digitalRead(buttons[i]) == LOW){ //Is button pressed?
      analogWrite(LEDs[i], brightness); //Set brightness (from potentiometer) of the LEDs for that button
    }
    else{
      analogWrite(LEDs[i], LOW);        //Else turn the lights off
    }
  }
}
