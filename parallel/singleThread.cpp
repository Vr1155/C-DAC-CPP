#include<iostream>
#include<chrono>
#include<thread>

// you can use time ./a.out to check how much time this program takes.

using namespace std;

void doSomeJob(){
	
	// this thread simply sleeps for 1 second.

	cout << "Job started..." << endl;
	this_thread::sleep_for(chrono::milliseconds(1000));
	cout << "Job Completed..." << endl;
	cout << "_____________________________________________" << endl;
}

int main(){
	doSomeJob();
}
