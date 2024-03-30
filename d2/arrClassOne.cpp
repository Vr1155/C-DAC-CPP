#include<iostream>
using namespace std;

#ifndef SIZE
#define SIZE 40
#endif

class Array{
	int arr[SIZE];
	int size;
public:
	void initializeArr();
	void fillArray(int first);
	void printArray();
};

int main(){
	Array obj;
	obj.initializeArr();
	obj.fillArray(101);
	obj.printArray();
}

void Array::initializeArr(){
	cout << "Enter size: (less than " << SIZE <<"): ";
	cin >> size;
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
