/*
  Blink:
  Blinks an LED by bit masking.
  The on-board LED on the Arduino UNO is at PortB 5.
 */

// Defining the MASK function to access the bit left shifted by x
#define MASK(x) ((unsigned char) (1<<(x)))

void setup(){                
  // DDRB |= MASK(5);   // The LED pin is output. Mask: 00100000
  // DDRB is Data Direction Register on Port B
  // This register maps each of its bits to the Input Output pins for Port B.
  // If a bit is set to 1 then that pin is set as an output. 0 is input.
  DDRB = DDRB | MASK(5); // Bit on Index 5 is Assigned a 1 so it is an Output.
  // | is the bit wise OR

}
  
void loop(){
   PORTB |= MASK(5);  // Turn LED on
  delay(500);
   PORTB &= ~MASK(5); // Turn LED off
  delay(500);
}
