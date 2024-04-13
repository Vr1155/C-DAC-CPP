/*
 * First multi-threaded program in C++
 *
 * Notice that you have to compile this program with "-lpthread" option
 * otherwise you will get a linker error like undefined reference to pthread_create
 * this is because C++ internally uses pthread library
 *
 */


#include<iostream>
#include<thread>

using namespace std;

void fun(){
	while(1)
		cout << "X";
}

int main(){
	thread obj(fun);

	while(1)
		cout << "O";
}
