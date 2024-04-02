#include<iostream>

#ifndef SIZE
#define SIZE 50
#endif

using namespace std;

class Array{
	// using dynamically allocated class variables:
	int* arr;	// a pointer variable
	const int size;
public:
	Array(int = 0);
	Array(int sz, int first);
	~Array();

	void fillArray();
	void printArray();
};

int main(){
	Array b(20);
	b.fillArray();
	b.printArray();

	Array a(40, 100);

	a.printArray();
}

Array::Array(int s):size(s){
	arr = new int[size];
}

Array::Array(int s, int first):size(s){
	arr = new int[size];
	arr[0] = first;
	for(int i=1; i < size; i++){
		arr[i] = arr[0] + i;
	}
}

// using destructor to deallocate memory in dynamically allocated class variables
// as object goes out of scope in the program in which it was instantiated.
Array::~Array() {
	delete[] arr;
}

void Array::fillArray(){
	for(int i=1; i < size; i++){
		arr[i] = arr[0] + i;
	}
}

void Array::printArray(){
	cout << "Printing array:\n";
	for(int i = 0; i< size; i++){
		cout << arr[i] << " ";
	}
	cout << "\n";
}
