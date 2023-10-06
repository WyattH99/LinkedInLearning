#include <stdio.h>
#include <string.h>

int main(){
    char string1[64];
    char string2[64];
    char buffer[128];

    printf("Input String1: ");
    fgets(string1, 64, stdin);
    printf("Input String2: ");
    fgets(string2, 64, stdin);

    strcpy(buffer, string1);
    strcat(buffer, string2);
    printf("Final String: %s",buffer);

    return(0);
}