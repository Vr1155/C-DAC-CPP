#include<iostream>
using namespace std;

// Instructor's code for operator overloding of []
// and how to use it with arrays inside a class.

class Array{
	int* arr;
	const int size;
public:
	Array(int = 0);
	Array(int sz, int first);
	~Array();

    int& operator[](int idx){
        return arr[idx];
    }

	void fillArray(int first);
	void printArray();
};

int main(){
    Array a(10, 1001);
    a.printArray();
    a[3] = 4000;
    a.printArray();
}

Array::Array(int sz):size(sz){
	arr = new int[size];
}

Array::Array(int sz, int first):size(sz){
	arr = new int[size];
	fillArray(first);
}

Array::~Array(){
	delete []arr;
}

void Array::fillArray(int first){
	for(int cnt = 0; cnt < size; ++cnt)
		arr[cnt] = first + cnt;
}

void Array::printArray(){
	cout << "Array: ";
	for(int cnt = 0; cnt < size; ++cnt)
		cout << arr[cnt] << " ";
	cout << endl;
}

