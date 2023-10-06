#include <stdio.h>
#include <math.h>

int main(){
    float a,b;

    printf("Input values for a and b: ");
    scanf("%f", &a);
    scanf("%f", &b);
    
    printf("Added: %f, Subtract: %f, Multiply: %f, Divide: %f, Power: %f, SquareRoot a: %f, SquareRoot b: %f\n", a+b, a-b, a*b, a/b, pow(a,b), sqrt(a), sqrt(b));

    return(0);
}