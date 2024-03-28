#include<iostream>
using namespace std;

int gVar = 100; // global variable
void fun();	// global function declaration

int main(){

	// Notice how scope resolution operator helps us point to global variables
	// and local variables of same name and helps avoids name collision.

	int gVar = 200;	// local variable
	cout << "Global variable = " << ::gVar << " Local variable = " << gVar << endl;
	fun();	// globally declared function	
	
}

void fun(){	// definition
	cout << "In fun()\n";
	
}
