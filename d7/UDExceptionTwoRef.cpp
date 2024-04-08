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
		// if you notice, both constructor and destructor are now getting called only one time! Why?
		// This is because, we are passing exception object as reference to catch block.
		// Therefore, only one exception object is created.

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

	}catch(MyException& eObj){	// catching exception object by reference
		eObj.what();
	}
	// This statement will run as exception was handled by catch block:
	cout << "statement #3" << endl;

}
