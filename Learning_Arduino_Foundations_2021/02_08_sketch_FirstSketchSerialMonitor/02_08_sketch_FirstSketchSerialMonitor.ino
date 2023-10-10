int LED=13; //identify pin 13
int counter = 0; // initializing counter variable

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT); // initialize digital pin LED as an output
  Serial.begin(9600); // initializing Serial to 9600 Baud
}

void loop() {
  // put your main code here, to run repeatedly:
  counter = counter + 1; // counter++
  Serial.print("Blink Number # ");
  Serial.println(counter);
  digitalWrite(LED,HIGH);// turn ON the LED
  delay(1000);          // wait for 1 second
  digitalWrite(LED,LOW); // Turn OFF the LED
  delay(500);           // wait for half a second
}
