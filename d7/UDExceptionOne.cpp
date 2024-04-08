#include <iostream>
using namespace std;

// creating a user defined exception class:
class MyException{
	int num;
	string mesg;
public:
	// constructor that takes info and sets values in Exception object:
	MyException(int errNo, const char* msg):num(errNo),mesg(msg){}
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

	}catch(MyException eObj){
		eObj.what();
	}
	// This statement will run as exception was handled by catch block:
	cout << "statement #3" << endl;

}
