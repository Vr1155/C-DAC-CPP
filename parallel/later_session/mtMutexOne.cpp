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
	// defer_lock_t() essentially defers (delays) the locking mechanism
	// it ensures that locking does not happen right away.
	unique_lock<mutex> lock1(mt1, defer_lock_t());
	lock1.lock();
	// This is the CRITICAL SECTION.
	// Lock acquired here...
	// perform ops on shared data here.
	

	for(int i=0; i<100; i++){
		count++;
		this_thread::sleep_for(chrono::milliseconds(1));
	}

	// exiting CRITICAL SECTION:
	lock1.unlock();
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

