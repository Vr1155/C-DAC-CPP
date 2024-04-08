#include <iostream>
#include <exception>

using namespace std;

// creating a user defined exception class that inherits from in-built exception base class:
class MyException:public exception{
	int num;
	string mesg;
public:
	// constructor that takes info and sets values in Exception object:
	MyException(int errNo, const char* msg):num(errNo), mesg(msg){}
	// displays details of exception object:
	void what(){
		cout << "num: " << num << " Type: " << mesg << endl;
	}
};

int main(){
	try{
		cout << "statement #1" << endl;
		throw MyException(404, "Resource NOT AVAILABLE");
		// this statement will not run,
		// as control goes to catch block:
		cout << "statement #2" << endl;

	}catch(MyException& eObj){
		// comment out this catch block to see how base class exception works,
		eObj.what();
	}
	catch(exception& eObj){
		// base class does not have a what function
		// but if it was a virtual function, it would've have called what function in subclass:
		eObj.what();
	}
	// This statement will run as exception was handled by catch block:
	cout << "statement #3" << endl;

}
