

#include<iostream>
using namespace std;

class Test{
	int data;
public:
	Test(int x=0):data(x){cout<<"Test(" << x << ")"<<endl;}
	~Test(){cout << "~Test()"<<endl;}
	void disp(){cout << "Test::disp() " << data << endl;}
};

// Best solution to this problem,
// is to create a pointer class.
// This is an example of a wrapper class.
// if you notice, we are using stack unwinding
// to deallocate our pointer to an objects
// This is the main principle of other in-built wrapper classes
// like smart pointers


class Pointer{	// wrapper class
	Test *ptr;
public:
	Pointer(int x=0):ptr(new Test()){}
	~Pointer(){delete ptr;}
	// using operator overloading
	// we are returning a pointer to a test object
	// and calling a function called disp() that is
	// inside that class.
	Test* operator->(){
		return ptr;
	}
};

void recur(int num){
	Pointer obj(num);
	obj->disp();
	if(num <= 5){
		cout << num << " ";
		recur(num+1);
		cout << num << " ";
	}
	throw num;
}

int main(){
	try{
		recur(1);
	}catch(int x){
		cout << "Caught " << x << endl;
	}
	cout << "Final Statement\n";
}
