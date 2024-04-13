
#include<iostream>
#include<chrono>
#include<thread>
#include<vector>

using namespace std;

#ifndef NUM
#define NUM 5
#endif

void doSomeJob(){
	
	// this program simply sleeps for 1 second:

	cout << "Job started by child thread\n";
	this_thread::sleep_for(chrono::milliseconds(1000));
	cout << "Job Completed by child thread\n";
	cout << "____________________________________________" << endl;

}

int main(){
	
	// same code as before, only difference is that
	// we are using C++ style STL container called vector

	cout << "Main thread started!\n";

	// C++ style STL container:
	vector<thread> arr;

	// every child thread will execute doSomeJob() function:
	for(int cnt = 0; cnt < NUM; cnt++)
		arr.push_back(thread{doSomeJob});

	// modern C++ range based loop:
	for(auto &i: arr)
		i.join();

	cout << "Main Thread completed!\n";
}
