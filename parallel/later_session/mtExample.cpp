/* 
 * multiple threads in C++
 */

#include <iostream>
#include <vector>
#include <thread>
#include <functional>
#include <chrono>

using namespace std;

void fun(int &counter){
	for(int i=0; i<100; i++){
		counter++;
		this_thread::sleep_for(chrono::milliseconds(1));	
	}
}

int main(){
	// we will create 10 child threads that will try to increment this value:
	int counter = 0;

	// Storing thread objects here:
	vector<thread> threadObjs;

	cout << "Counter value: " << counter << endl;

	// creating child threads and pushing them into the vector:
	for(int i=0; i<10; i++){
		threadObjs.push_back(thread{fun, ref(counter)});
	}
	
	// Waiting for child threads to finish:
	for(auto &t: threadObjs)
		t.join();

	cout << "Counter value: " << counter << endl;
}
