
#include <iostream>
using namespace std;

// capturing variables to lambda functions:
int main(){
	// this variable is a local variable to main() only
	// by default it is not visible in fun lambda function.
	int var = 10;

	// we need to capture the local variable 
	// for it to be visible inside the lambda function.
	auto fun = [var](){
		cout << "Printing var: " << var << endl;
	};

	fun();
}
