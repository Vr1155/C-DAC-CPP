
#include<stdio.h>

// similarly compiler allows redeclaration but does not allow redefinition of functions as well.
// This is because ODR = One Definition Rule.

// declarations:
int x;
void fun();

int main(){
	printf("Printing... %d\n", x);
	fun();
}

// definitions:
void fun(){
	printf("In fun...%d\n", x);
}
/*
void fun(){
	printf("In fun...%d\n", x);
}
*/
int x = 100;
