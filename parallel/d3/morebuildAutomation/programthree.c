#include<programTwo.h>

void printfun(){
	printf("This is the printfun() function! Enter two numbers:\n");
	int a, b;
	scanf("%d %d", &a, &b);

	int c = processInput(a, b);
	printf("Addition of two numbers is %d\n", c);
	
}

