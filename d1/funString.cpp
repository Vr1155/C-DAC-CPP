#include<iostream>
using namespace std;

void fun(char* str){
	cout << "void fun(char*)"<<endl;
	// This next line will give segfault if we pass a string as argument, 
	// because we are trying to modify a read only string 
	str[0] = 'N';
	cout << "Testing...\n";
}

int main(){
	// This will give segfault:
	//fun("testing some strings here");
	
	// on the other hand this will run:
	char str[] = "testing some strings here"; 
	fun(str);
	return 0;
}


