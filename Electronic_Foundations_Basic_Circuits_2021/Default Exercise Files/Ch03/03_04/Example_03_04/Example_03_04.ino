const float Vin = 5.0; // Volts
const float R1 = 4700.0; // Ohms

void setup() {
  
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}
 
void loop() {
  
  // Read ADC and convert to Voltage
  int adcValue = analogRead(A0);
  float Vout = adcValue * (5.00 / 1023.0);

  // Calculate R2 in kilohms based on R1, Vin, and Vout
  float R2 = (Vout * R1) / (Vin - Vout);
  R2 = R2 / 1000;
  
  // Print Vout and R2 to console
  Serial.println("Vout = " + String(Vout) + " V; R2 = " + String(R2) + " kilohms");
  delay(250);
  
}
