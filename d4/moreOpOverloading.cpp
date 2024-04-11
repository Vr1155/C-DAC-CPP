#include<iostream>
using namespace std;

// instructor's code for operator overloading of unary ++ operators (prefix and postfix)

class Test{
	int data;

public:
	Test(int x=0):data(x) {}
	void print(){cout << "data: "<<data<<endl;}
	// overloading prefix ++  
	Test& operator++();
	// overloading postfix ++ with a dummy int.
	Test operator++(int);
};

Test& Test::operator++(){
	// notice that object that is returned contains updated value.
	data+=1;
	return *this;
}

Test Test::operator++(int){
	// notice that object that is returned does not contain updated value.
	Test temp(*this);
	data+=1;
	return temp;
}

int main(){
	Test a, b=10, c;

	a = ++b;
	a.print();
	b.print();

	c = b++;
	c.print();
	b.print();
}

