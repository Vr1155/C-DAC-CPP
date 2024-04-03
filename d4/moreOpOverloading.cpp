#include<iostream>
using namespace std;

// instructor's code for operator overloading of unary ++ operators (prefix and postfix)

class Test{
	int data;

public:
	Test(int x=0):data(x) {}
	void print(){cout << "data: "<<data<<endl;}
	Test& operator++();
	Test operator++(int);
};

Test& Test::operator++(){
	data+=1;
	return *this;
}

Test Test::operator++(int){
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

