#include<iostream>
using namespace std;

int gVar = 100; // global variable
void fun();	// global function declaration

int main(){

	// Notice how scope resolution operator helps us point to global variables
	// and local variables of same name and helps avoids name collision.
	// Notice how using "::global_var_name" helps us specify to the compiler
	// that we want the value of global variable and not the local variable
	// of the same name
	
	int gVar = 200;	// local variable
	cout << "Global variable = " << ::gVar << " Local variable = " << gVar << endl;
	fun();	// globally declared function	
	
}

void fun(){	// definition
	cout << "In fun()\n";
	
}
