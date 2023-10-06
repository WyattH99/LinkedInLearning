#include <stdio.h>

void evaluate(int x);

int main()
{
	int i;

	printf("Type an integer value: ");
	scanf("%d",&i);
	evaluate(i);

	return(0);
}

void evaluate(int x)
{
	if(x < 10){
		printf("x < 10. x: %d\n", x);
	}else if(x > 10){
		printf("x > 10. x: %d\n", x);
	}else{
		printf("x = 10. x: %d\n", x);
	}

}

