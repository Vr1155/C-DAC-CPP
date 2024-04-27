
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
// Therefore, in this code we will try to optimize the code a little bit:

// importing the atomic object:
void fun(atomic<int> &counter){
	// creating a primitive variable and performing single threaded operations on it.
	int res = 0;
	for(int i=0; i<100; i++){
		res++;
		this_thread::sleep_for(chrono::milliseconds(1));	
	}
	counter += res;
}

// Now, the atomic object counter gets updated only 10 times instead of 1000

int main(){
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
