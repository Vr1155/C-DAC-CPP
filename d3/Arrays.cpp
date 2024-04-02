#include<iostream>

#ifndef SIZE
#define SIZE 50
#endif

using namespace std;

class Array{
	int arr[SIZE];
	const int size;
public:
	Array(int = 0);
	Array(int sz, int first);

	void fillArray();
	void printArray();
};

int main(){

	Array b(20);
	b.fillArray();
	b.printArray();

	Array a(40, 100);
	a.fillArray();
	a.printArray();
}

Array::Array(int a):size(a){
	
}

Array::Array(int s, int first):size(s),arr{first}{
	
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
