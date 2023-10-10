
int GreenLED = 10;
int YellowLED = 11;
int RedLED = 12;

void setup() {
  // put your setup code here, to run once:
  
  // Initialize the pins and direction
  pinMode(GreenLED, OUTPUT);
  pinMode(YellowLED, OUTPUT);
  pinMode(RedLED, OUTPUT);

  // Initialize the LEDs to OFF
  digitalWrite(GreenLED, LOW);
  digitalWrite(YellowLED, LOW);
  digitalWrite(RedLED, LOW);

  // Initialize the Serial to 9600 BAUD
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  // Yield
  digitalWrite(GreenLED, LOW);
  digitalWrite(YellowLED, HIGH);
  digitalWrite(RedLED, LOW);
  Serial.println("Yield for 1sec");
  delay(1000);

  // GO
  digitalWrite(GreenLED, HIGH);
  digitalWrite(YellowLED, LOW);
  digitalWrite(RedLED, LOW);
  Serial.println("GO for 2sec");
  delay(2000);

  // Stop
  digitalWrite(GreenLED, LOW);
  digitalWrite(YellowLED, LOW);
  digitalWrite(RedLED, HIGH);
  Serial.println("Stop for 2sec");
  delay(2000);

  // Code to cycle the lights every second to Debug my LEDs
  // digitalWrite(GreenLED, HIGH);
  // delay(1000);
  // digitalWrite(GreenLED, LOW);
  // digitalWrite(YellowLED, HIGH);
  // delay(1000);
  // digitalWrite(YellowLED, LOW);
  // digitalWrite(RedLED, HIGH);
  // delay(1000);
  // digitalWrite(RedLED, LOW);

}