#include<unistd.h>
#include<stdio.h>

int main(){
	int ret = fork();

	if(ret == 0){
		printf("child process id: %d\n", getpid());
		printf("child ppid: %d\n", getppid());
		printf("child uid: %d\n", getuid());
		printf("child euid: %d\n", geteuid());
		printf("child gid: %d\n", getgid());
		printf("child egid: %d\n", getegid());
	}
	else if(ret > 0){
		printf("parent process id: %d\n", getpid());
		printf("parent ppid: %d\n", getppid());
		printf("parent uid: %d\n", getuid());
		printf("parent euid: %d\n", geteuid());
		printf("parent gid: %d\n", getgid());
		printf("parent egid: %d\n", getegid());
	}
	_exit(0);
}
