#include<iostream>
#include<chrono>
#include<thread>
#include<vector>

using namespace std;

#ifndef NUM
#define NUM 5
#endif

// Using functor class to achieve the same thing as previous programs:

class DoSomeJob{

public:
	void operator()(){
		
		// this program simply sleeps for 1 second:

		cout << "Job started by child thread\n";
		this_thread::sleep_for(chrono::milliseconds(1000));
		cout << "Job Completed by child thread\n";
		cout << "____________________________________________" << endl;

	}
};

int main(){
	
	// same code as before, only difference is that
	// we are using C++ style STL container called vector

	cout << "Main thread started!\n";

	// C++ style STL container:
	vector<thread> arr(NUM);

	// creating thread object where each child thread will execute a functor
	// notice that "thread{DoSomeJob()}" actually passes a function to the thread object
	// This function is specified in the overloaded operator "()" inside DoSomeJob class.
	// modern C++ range based loop:
	for(auto &i: arr)
		i = thread{DoSomeJob()};	

	for(auto &i: arr)
		i.join();

	cout << "Main Thread completed!\n";
}
