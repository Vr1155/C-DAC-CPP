

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
		cout << "Destructor called..." << endl;
	}
};

int main(){
	try{
		cout << "statement #1" << endl;
		// Throwing dynamically allocated Exception object:
		//
		// If you notice, exception constructor and destructor will be called exactly once.
		// This is because only one exception object is getting created.
		throw new MyException(404, "Resource NOT AVAILABLE");
		// this statement will not run,
		// as control goes to catch block:
		cout << "statement #2" << endl;

	}catch(MyException *ePtr){
		// catching the dynamically allocated Exception object as a Exception class pointer:
		ePtr->what();
		// deallocating pointer to an exception object:
		delete ePtr;
	}
	// This statement will run as exception was handled by catch block:
	cout << "statement #3" << endl;

}
