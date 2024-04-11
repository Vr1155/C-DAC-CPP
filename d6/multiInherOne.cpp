#include<iostream>
using namespace std;

// multiple inheritance without virtual keyword:

// This is also known as diamond problem

class B{
	int a;
};

class B1:public B{
	int b;
};


class B2:public B{
	int c;
};

class D:public B1, public B2{
	int d;
};

int main(){

	// check the sizes of classes when virtual keyword is not used:

	cout << "B: " << sizeof(B) << endl;
	cout << "B1: "<< sizeof(B1) << endl;
	cout << "B2: " << sizeof(B2) << endl;
	cout << "D: " << sizeof(D) << endl;
	
	// class D will end up having 5 integers worth of space,
	// because class B integer gets inherited twice.
}
