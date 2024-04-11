#include<iostream>
using namespace std;

class Array{
	// using dynamically allocated class variables:
	int* a;	// a pointer variable
	const int size;
public:
	Array(int = 0);
	Array(int sz, int first);
	Array(const Array&);	// copy constructor does deep copy
	~Array();

	void fillArray(int first);
	void printArray();
};

int main(){
	Array a=10;
	a.fillArray(101);
	a.printArray();
	{
		Array b = a;	// copy constructor called! "b" now has a deep copy
		b.printArray();
	}	// object b goes out of scope

	cout << "After deletion..." << endl;
	a.printArray();	// Full array printed despite "b" being out of scope.
}

Array::Array(const Array &rhsObj):size(rhsObj.size){
	if(size > 0){
		a = new int[size];
		for(int cnt = 0; cnt < size; ++cnt)
			a[cnt] = rhsObj.a[cnt];
	}
	else{
		a = nullptr;
	}
}

Array::Array(int sz):size(sz){
	a = new int[size];
}

Array::Array(int sz, int first):size(sz){
	a = new int[size];
	fillArray(first);
}

// using destructor to deallocate memory in dynamically allocated class variables
// as object goes out of scope in the program in which it was instantiated.
Array::~Array() {
	delete[] a;
}

void Array::fillArray(int first){
	for(int i=0; i < size; i++){
		a[i] = first + i;
	}
}

void Array::printArray(){
	cout << "Printing array:\n";
	for(int i = 0; i< size; i++){
		cout << a[i] << " ";
	}
	cout << "\n";
}
