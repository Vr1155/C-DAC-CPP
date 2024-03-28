#include<iostream>
using namespace std;

int gVar = 100; // global variable
void fun();	// global function declaration

int main(){
	cout << "Global variable... " << gVar << endl;
	fun();	// globally declared function	
	
}

void fun(){	// definition
	cout << "In fun()\n";
	
}
