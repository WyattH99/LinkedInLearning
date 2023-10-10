int LED=8; // Pin 8
int counter=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  counter= counter + 100; // adding 100
  Serial.print("Blink Number # ");
  Serial.println(counter);
  digitalWrite(LED,HIGH);
  delay(1000-counter); // blinks 100ms faster every loop
  // actually the delay is 100ms less every loop which makes the LED blink faster
  digitalWrite(LED,LOW);
  delay(1000-counter);
}
