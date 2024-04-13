#include<stdio.h>

// notice that compiler allows redeclaration but does not allow redefinition.
// This is because ODR = One Definition Rule.

// declarations:
int x;
int x;
int x;

int main(){
	printf("Printing... %d\n", x);
}

// definitions:
int x = 100;
int x = 100;
