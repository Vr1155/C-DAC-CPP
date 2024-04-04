#include<iostream>
using namespace std;

// instructor's code for operator overloading of unary ++ operators (prefix and postfix)
// but as friend functions.

class Test{
	int data;

public:
	Test(int x=0):data(x) {}
	void print(ostream &out){out << "data: "<<data<<endl;}
	
	friend Test& operator++(Test&);
	friend Test operator++(Test&, int);
};

// Note that these are friend functions now!
// so no use of this pointer, only parameters will have operands:
Test& operator++(Test& lhs){	// pre-fix
	lhs.data+=1;
	return lhs;
}

Test operator++(Test& lhs, int){
	Test temp(lhs);
	lhs.data+=1;
	return temp;
}

int main(){
	Test a, b=10, c;

	a = ++b;
	a.print(cout);
	b.print(cout);

	c = b++;
	c.print(cout);
	b.print(cout);
}

