#include <iostream>
using namespace std;

void change(int);

int main(){
	int var=10;
	cout << "Before Var: " << var << endl;
	change(var);
	cout << "After Var: " << var << endl;
	return 0;
}

void change(int xVar){
	xVar+=20;
}
