
#include<iostream>
using namespace std;

class Test{
	int data;
public:
	Test(int x=0):data(x) {}
	void print(){cout<<"data: "<<data<<endl;}

	// operator overloading as friend functions
	friend Test operator+(Test& lhs, Test& rhs);
	friend Test& operator-(Test&);
};

// Note that when you use operator overloading as a friend function,
// you cannot use this operator,
// so operands can only be passed as arguments.
	
// syntax of overloading binary + operator as a friend function:
Test operator+(Test& lhs, Test& rhs){
	Test temp;
	temp.data = lhs.data + rhs.data;
	return temp;
}


// syntax of overloading unary - operator as a friend function:
Test& operator-(Test& lhs){
	lhs.data = -lhs.data;
	return lhs;
}

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



