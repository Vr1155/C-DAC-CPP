#include<iostream>
using namespace std;

// instructor's code for operator overloading of unary ++ operators (prefix and postfix)
// but as friend functions.
// and also overloading << operator so that we dont have to use print function anymore.


class Test{
	int data;

public:
	Test(int x=0):data(x) {}
	friend ostream& operator<<(ostream& , Test&);
	friend Test& operator++(Test&);
	friend Test operator++(Test&, int);
};

ostream& operator<<(ostream& out, Test& obj){
	out << "data: " << obj.data;
	return out;
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
	cout << a << endl;	// operator<<(cout, a).operator<<(endl);
	cout << b << endl;

	c = b++;
	cout << c << endl;
	cout << b << endl;
}

