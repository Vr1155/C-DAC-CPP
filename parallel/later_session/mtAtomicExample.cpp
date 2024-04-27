/* 
 * multiple threads in C++
 */

#include <iostream>
#include <vector>
#include <thread>
#include <functional>
#include <chrono>
#include <atomic>

using namespace std;

// Note: that atomic object is slower than the primitive data type like integer.

// importing the atomic object:
void fun(atomic<int> &counter){
	for(int i=0; i<100; i++){
		counter++;
		this_thread::sleep_for(chrono::milliseconds(1));	
	}
}

int main(){
	// changing the int counter to atomic integer counter object:
	atomic<int> counter(0);

	vector<thread> threadObjs;

	cout << "Counter value: " << counter << endl;

	for(int i=0; i<10; i++){
		threadObjs.push_back(thread{fun, ref(counter)});
	}
	
	for(auto &t: threadObjs)
		t.join();

	cout << "Counter value: " << counter << endl;
}
