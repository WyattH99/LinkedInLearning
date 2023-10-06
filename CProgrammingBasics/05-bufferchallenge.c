#include <stdio.h>
#include <stdlib.h>

#define SIZE 64

int main(){
    char* name;

    name = malloc( sizeof(char) * SIZE);
    if( name == NULL){
        puts("No memory allocated");
        return(1);
    }

    printf("Input your name: ");
    fgets(name, SIZE, stdin);
    printf("Name Inputed: %s\n", name);

    return(0);
}