/*
 *
 * Call by reference.
 * 
 * By using references we can modify the actual value of the variable
 * outside the function where it was passed as argument, not just a copy of it.
 *
 */

#include <iostream>
using namespace std;

void change(int&);

int main(){
	int var=10;
	cout << "Before Var: " << var << endl;
	change(var);
	cout << "After Var: " << var << endl;
	return 0;
}

void change(int& xVar){
	xVar += 20;
}
