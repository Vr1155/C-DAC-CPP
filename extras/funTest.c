#include<stdio.h>

int gVar=100;

// Prototypes or declarations:
void fun();
void funOne(int);
void funTwo(int, int);
void funThree(int, int, int);

int main(){
	fun();
	funOne(123);
	funTwo(423,234);
	funThree(4234,2342,3234);
}

// Not defining functions will give us linker error!
// so lets define functions:

void fun(){
	printf("void fun() called...Global %d\n", gVar);
}
void funOne(int x){
	printf("void fun(%d) called...Global %d\n", x, gVar);
}
void funTwo(int x, int y){
	printf("void fun(%d,%d) called...Global %d\n", x, y, gVar);
}
void funThree(int x, int y, int z){
	printf("void fun(%d,%d,%d) called...Global %d\n", x, y, z, gVar);
}


