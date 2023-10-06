#include <stdio.h>

int main(){
    printf("Input an Integer 1(Red), 2(Green), or 3(Blue): ");
    int x;
    scanf("%d", &x);

    switch(x){
        case(1):
            printf("1: Red\n");
            break;
        case(2):
            printf("2: Green\n");
            break;
        case(3):
            printf("3: Blue\n");
            break;
        default:
            printf("Not a valid Input\n");
            break;
    }
        
    return(0);
}