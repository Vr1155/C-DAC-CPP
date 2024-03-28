/*
 *
 *
 *
 * Call by address.
 * 
 * By using pointer and address we can modify the actual value of the variable
 * outside the function which was passed as argument, not just a copy of it.
 *
 *
 */

#include <iostream>
using namespace std;

void change(int*);

int main(){
	int var=10;
	cout << "Before Var: " << var << endl;
	change(&var);
	cout << "After Var: " << var << endl;
	return 0;
}

void change(int* xVar){
	*xVar += 20;
}
