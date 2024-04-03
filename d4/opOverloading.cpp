#include<iostream>
using namespace std;

class Test{
	int data;
public:
	Test(int x=0):data(x) {}
	void print(){cout<<"data: "<<data<<endl;}
	// operator overloading syntax:
	// this pointer contains the element to the left of binary operator.
	// function argument contains element to the right of the binary operator.
	// return type is the result that is returned from the operation.
	Test operator+(Test &rhs){
		Test temp;
		// cout << "left hand side: " << this->data << endl;
		// cout << "right hand side: " << rhs.data << endl;
		temp.data = this->data + rhs.data;
		return temp;
	}


	// overloading unary operator:
	Test& operator-(){
		this->data = -this->data;
		return *this;
	}
};

int main(){
	Test a = 100;	
	// constructor is used, but we are still using assignment operator
	// This shows that by default when you use assignment with object,
	// there is operator overloading by default 
	// that calls single parameterized constructor.
	
	Test b = 50;

	// overloaded + operator in Test class is used.
	Test c = a + b;

	a.print();
	b.print();
	c.print();
	// using - operator which is a overloaded unary operator. 
	(-c).print();
}



