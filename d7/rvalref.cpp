#include<iostream>
using namespace std;

void fun(){
	// a simple demo on r-value references
	// they are useful when you need to pass references
	// to a function and use them as r-values for some purpose.

	int&& rValRef = 10;
	int Integer = rValRef;

	cout << "Integer is: " << Integer << endl;
}

int main(){
	fun();
}
