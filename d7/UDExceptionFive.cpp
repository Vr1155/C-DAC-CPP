#include <iostream>
#include <exception>

using namespace std;

// creating our own exception base class:
class OurException{

public:
	virtual void what(){}
};

// a different exception derived class that inherits from exception base class:
class YourException:public OurException{
	int num;
public:
	YourException(int errNo):num(errNo){}
	void what(){
		// notice that this class has only number and no message:
		cout << "num: " << num << endl;
	}
};

// creating a user defined exception class that inherits from user defined exception base class:
class MyException:public OurException{
	int num;
	string mesg;
public:
	MyException(int errNo, const char* msg):num(errNo), mesg(msg){}
	// displays details of this object:
	void what(){
		cout << "num: " << num << " Type: " << mesg << endl;
	}
};

int main(){
	try{
		cout << "statement #1" << endl;

		// here we can throw 3 different types of objects and all wil be caught
		// since catch block takes base class object as argument.
		// notice that functionality of what() will be based on what object we are throwing,
		// because what() in base class is a virtual function.

		// throw MyException(404, "Resource not found");
		 throw YourException(404);
		// throw OurException();

		// this statement will not run,
		// as control goes to catch block:
		cout << "statement #2" << endl;

	}catch(OurException& eObj){
		// catching as base class object
		// But notice that we are calling what() which is a virtual function in base class
		// so its behaviour will depend on what derived class object we are throwing and 
		// its implementation in that derived class.
		//
		// In this way, we can create a hierarchy of exceptions by using 
		// inheritance hierarchy of exception objects.
		eObj.what();
	}

	// This statement will run as exception was handled by catch block:
	cout << "statement #3" << endl;

}
