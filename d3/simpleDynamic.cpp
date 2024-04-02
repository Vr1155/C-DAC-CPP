#include<iostream>
using namespace std;

// give default arguments in declaration itself (like first = 101):
void createNFillArray(int sz, int first = 101);

int main(){
	createNFillArray(5);
	createNFillArray(15);
	createNFillArray(55);
}

void createNFillArray(int sz, int first){
	int *iPtr = new int[sz];	// here size is not fixed.....
	for(int i=0; i<sz; i++)
		iPtr[i] = first + i;

	cout << "Arr: ";
	for(int i=0; i<sz; i++)
		cout << iPtr[i] << " ";
	cout << endl;

	delete []iPtr;	// deallocates memory

	// if you do not use delete, that part of memory will not be freed.
	//
	// In programs which run indefinitely 
	// (a program using infinite loop or like programs in mobile devices)
	// This will become a big problem as it creates memory leaks.
	//
	// use tools like valgrind to find out memory leaks 
	// use command to find out where memory was not deallocated and leaks are happening:
	//
	// valgrind ./a.out --memory-check
}



