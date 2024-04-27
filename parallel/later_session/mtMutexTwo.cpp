
#include<iostream>
#include<vector>
#include<thread>
#include<functional>
#include<chrono>
#include<mutex>
using namespace std;

mutex mt1;

int count = 0;

void doSomeJob(int &count){
	// lock_guard keeps it locked until end of function:
	lock_guard<mutex> lock1(mt1);
	// This is the CRITICAL SECTION.
	// Lock acquired here...
	// perform ops on shared data here.

	for(int i=0; i<100; i++){
		count++;
		this_thread::sleep_for(chrono::milliseconds(1));
	}

	// exiting CRITICAL SECTION:
}


int main(){
	vector<thread> threadObjs;
	cout << "global counter value: " << count << endl;
	for(int i=0; i<10; i++){
		threadObjs.push_back(thread{doSomeJob, ref(count)});
	}
	for(auto &t: threadObjs)
		t.join();
	cout << "Counter value: " << count << endl;
}

