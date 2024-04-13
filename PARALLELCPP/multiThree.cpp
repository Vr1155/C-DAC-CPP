#include<iostream>
#include<chrono>
#include<thread>

using namespace std;

#ifndef NUM
#define NUM 5
#endif

void doSomeJob(){
	
	// this program simply sleeps for 1 second:

	cout << "Job started by child thread\n";
	this_thread::sleep_for(chrono::milliseconds(1000));
	cout << "Job Completed by child thread\n";
}

int main(){
	
	cout << "Main thread started!\n";

	// create NUM number of threads:
	thread arr[NUM];

	// every child thread will execute doSomeJob() function:
	for(int cnt = 0; cnt < NUM; cnt++)
		arr[cnt] = thread{doSomeJob};	// way to initialize a functor

	// wait for each child thread to terminate execution:
	for(int cnt = 0; cnt < NUM; cnt++)
		arr[cnt].join();

	// use:
	// $g++ multiThree.cpp -lpthread -DNUM=100
	// $time ./a.out
	//
	// and you can see that we spawned 100 child threads and
	// each of them executed within 1 second PARALLELY.
	//
	// if you see, sometimes output seems a little unorganized
	// like for eg. "Job Completed..." comes one after another
	// This happens because all of these threads are running parallely
	
	cout << "Main Thread completed!\n";
}
