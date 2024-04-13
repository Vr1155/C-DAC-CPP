

#include <iostream>
using namespace std;

// modifying captured variables in lambda functions:
int main(){
	// this variable is a local variable to main() only
	// by default it is not visible in fun lambda function.
	int var = 10;

	// we need to capture the local variable 
	// for it to be visible inside the lambda function.
	// Notice that we have to pass var as a reference otherwise it gives error
	// that var is a read only variable and we cannot assign it
	auto fun = [var](){
		cout << "Printing var: " << var << endl;
		var += 10;
		cout << "Printing var: " << var << endl;
	};

	fun();
}
