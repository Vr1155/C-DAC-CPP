#include<unistd.h>
#include<stdio.h>

// look at man fork
// unistd.h is an important library for fork()
//
// Read the entire man page
//



int main(){
	// calling the fork function to create a child process
	fork();
	fork();
	printf("Hello world...\n");
}
