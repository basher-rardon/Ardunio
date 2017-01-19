
const int greenLEDPin = 10;    // LED connected to digital pin 9
const int redLEDPin = 9;     // LED connected to digital pin 10
const int blueLEDPin = 11;    // LED connected to digital pin 11

int redValue = 200; // value to write to the red LED
int greenValue = 20; // value to write to the green LED
int blueValue = 255; // value to write to the blue LED/ pin with the photoresistor with the blue gel



void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);

  // set the digital pins as outputs
  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}

void loop() {

  analogWrite(redLEDPin, 255);
 analogWrite(greenLEDPin, 0);
 analogWrite(blueLEDPin, 255);

}
