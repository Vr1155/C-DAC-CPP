
#include<iostream>
using namespace std;

// instructor's code for operator overloading of unary ++ operators (prefix and postfix)
// but as friend functions.
// and also making print function as a friend function.


class Test{
	int data;

public:
	Test(int x=0):data(x) {}
	friend void print(ostream &out, Test &obj);	
	friend Test& operator++(Test&);
	friend Test operator++(Test&, int);
};

void print(ostream& out, Test& obj){
	out << "data: "<<obj.data<<endl;
}

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

	// note that print is now a friend function and not a class member function:

	a = ++b;
	print(cout, a);
	print(cout, b);

	c = b++;
	print(cout, c);
	print(cout, b);
}

