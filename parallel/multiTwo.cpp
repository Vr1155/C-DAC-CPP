
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
	// child thread will execute this:
	for(int i=0; i<10; i++)
		cout << "X";
	cout << endl;
}

int main(){
	// this will spawn a thread, that executes fun()
	// It is actually a functor
	thread obj(fun);

	for(int i=0; i<10; i++)
		cout << "O";
	cout << endl;

	// if you dont add this line,
	// you will get a segfault
	//
	//
	// join() in parent thread makes parent thread wait for child threads to terminate
	// basically it makes main thread wait (or puts it to sleep) 
	// until child thread terminates
	// only then it allows main threads to continue to next statement.
	obj.join();
}
