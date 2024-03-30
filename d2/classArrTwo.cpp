#include<iostream>
using namespace std;

#ifndef SIZE
#define SIZE 40
#endif

class Array{
	int arr[SIZE];
	int size;
public:
	Array();	// constructor ---> (No argument) ---> Default constructor
	Array(int);
	void fillArray(int first);
	void printArray();
};

int main(){
	Array a;	// default constructor gets called.
	a.fillArray(101);
	a.printArray();
	Array b = a;	// copying semantics/copy constructors
	b.printArray();
	Array c = 15;	// single parameterized constructor
	// now we have to create a constructor with one argument else, we will get error
	// Thus, we have to do constructor overloading.
	c.fillArray(100001);
	c.printArray();
}

Array::Array(){
	cout << "Enter size: (less than " << SIZE <<"): ";
	cin >> size;
	if(size>SIZE)
		size = SIZE;
}

Array::Array(int sz){
	size = sz;
	if(size>SIZE)
		size = SIZE;
}

void Array::fillArray(int first){
	for(auto i = 0; i<size; ++i){
		arr[i] = i+first;
	}
}

void Array::printArray(){
	cout << "Arr: ";
	for(auto i=0; i<size; ++i){
		cout << arr[i] << " ";
	}
	cout << "\n";
}
