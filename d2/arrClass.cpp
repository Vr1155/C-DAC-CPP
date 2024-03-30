#include<iostream>

#ifndef SIZE
#define SIZE 5
#endif

using namespace std;

/*
 *
	class Array{
		int arr[SIZE];
		int size;
	public:
		void initializeArr();
		void fillArray(int first);
		void printArray();
	};
 *
 *
 */



class Array {
	int arr[SIZE];
	int size;
public:
	void initializeArr(){
		size = SIZE;
		for(int i=0; i<size; i++){
			arr[i] = 0;
		}
		cout << "Array Initialized!\n";
	}

	void fillArray(int first){
		arr[0]=first;
		for(int i=1; i<size; i++){
			arr[i] = arr[0] + i;
		}
	}

	void printArray(){
		cout << "Printing array:\n";
		for(int i=0; i<size; i++){
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
};


int main(){
	Array arr;
	int first;

	arr.initializeArr();

	cout << "Enter the first integer eleement\n";
	cin >> first;
	arr.fillArray(first);

	arr.printArray();

	return 0;
}
