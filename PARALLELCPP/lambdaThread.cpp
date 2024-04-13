#include<thread>
#include<chrono>
#include<iostream>
using namespace std;


// Using lambda functions in multithreading
int main(){
	thread tObj([]{
			cout << "Job started..." <<endl;
			this_thread::sleep_for(chrono::milliseconds(1000));
			cout << "Job completed..." << endl;
			cout << "_________________________________" << endl;
			});

	tObj.join();
}
