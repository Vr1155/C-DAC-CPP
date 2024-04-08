
#include <iostream>
using namespace std;

// creating a user defined exception class:
class MyException{
	int num;
	string mesg;
public:
	// constructor that takes info and sets values in Exception object:
	MyException(int errNo, const char* msg):num(errNo),mesg(msg){
		cout << "Constructor called" << endl;
	}
	// displays details of exception object:
	void what(){
		cout << "num: " << num << " Type: " << mesg << endl;
	}

	~MyException(){
		// if you notice, this destructor is getting called two times! Why?
		// Actually two objects are created,
		// first object at line using throw keyword
		// second object at catch block since we are catching by value.
		// however, when second object is created, default copy constructor is called
		// and the default constructor with cout statement is not called.
		// when both objects go out of scope, default destructor is called.
		cout << "Destructor called..." << endl;
	}
};

int main(){
	try{
		cout << "statement #1" << endl;
		throw MyException(404, "Resource NOT AVAILABLE");
		// this statement will not run,
		// as control goes to catch block:
		cout << "statement #2" << endl;

	}catch(MyException eObj){
		eObj.what();
	}
	// This statement will run as exception was handled by catch block:
	cout << "statement #3" << endl;

}
