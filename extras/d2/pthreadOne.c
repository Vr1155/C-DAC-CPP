#include<stdio.h>
#include<pthread.h>

void* fun(void *args){
	while(1)
		printf("X");
}

int main(){
	// we have to compile this program with "-lpthread" option
	// because it is a non-standard library in C
	//
	// in C++ compiler, the compiler will internally use pthread library
	// so you have to use "-lpthread" option even if you didn't seem
	// to use anything related to pthread.
	//
	// all functions related to pthread library,
	// start with "pthread_"
	pthread_t tid;
	pthread_create(&tid, NULL, fun, NULL);

	while(1)
		printf("o");
}
