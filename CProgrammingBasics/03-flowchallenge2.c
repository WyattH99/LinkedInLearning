#include <stdio.h>
#include <math.h>

int main(){

    int x;
    for(x=1; x<=20; x++){
        printf("%d\n", x);
    }

    x = -10;
    while(x<=10){
        if(x % 2 == 0){
            printf("%d\n", x);
        }
        x++;
    }

    return(0);
}