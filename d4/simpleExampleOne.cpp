#include<iostream>
using namespace std;

class Simple{
	int data;
public:
	Simple& getData(int x = 10){
		data = x;
		return *this;
	}
	void printData(){
		cout << "Data: " << data << endl;
	}
};

int main(){
	Simple obj;
	obj.getData(100).printData();	// method chaining
	// because we are returning this pointer in getData()
	// we can use printData() on that returned object.
	// This is how we implement method chaining in C++

}
