#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

// here, two process will be created
// parent process and then child process.
// we can add _exit(0) from stdlib.h to terminate a process within
// someplace in this program.

int main(){
	int ret = fork();

	if(ret == 0){
		printf("Control in Child...\n");
		_exit(0);
	}
	else if(ret > 0){
		printf("Control in Parent\n");
		_exit(0);
	}

	_exit(0);

	// use _exit(0) function call outside if conditions if you want 
	// both process to exit without printing,
	// the last print statement
	// however, you can also put _exit(0) inside,
	// the if conditions mentioned above so that,
	// only child or parent process exits without printing the 
	// last statement.

	printf("Both Parent and Child has control...\n");
	
	_exit(0);
}
