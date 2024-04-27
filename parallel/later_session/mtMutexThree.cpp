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
	unique_lock<mutex> lock1(mt1);
	// This is the CRITICAL SECTION.
	// Lock acquired here...
	// perform ops on shared data here.

	int res = 0;
	for(int i=0; i<100; i++){
		res++;
		this_thread::sleep_for(chrono::milliseconds(1));
	}


	if(lock1)
		count += res;
	// exiting CRITICAL SECTION
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

