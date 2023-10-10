
int LED=13;

void setup() {
  // put your setup code here, to run once:
  //pinMode(13, OUTPUT);
  pinMode(LED,OUTPUT); // using the declaration above
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,HIGH); // turns LED ON
  delay(1000); // Tells the program to wait for 1 second
  digitalWrite(LED,LOW); // turns LED OFF
  delay(500); // waits for 0.5 seconds
}
