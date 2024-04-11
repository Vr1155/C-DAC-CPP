#include<iostream>
using namespace std;

void createNPrintArr(int);

int main(){
	// Another way to handle exceptions,
	// since the try catch block is inside the function,
	// whenever an exception is thrown, 
	// control goes to catch block inside the function
	// and function terminates
	// and in main function, control goes to next line
	// and program continues as usual.

	
	createNPrintArr(10);	// runs normally
	createNPrintArr(20);	// runs normally
	createNPrintArr(-20);	// will throw exception
	createNPrintArr(50);	// this line will ALSO execute
	// Notice that last function call also executed because,
	// exception was handled inside the function itself.
}

void createNPrintArr(int size){
        try{
		if(size < 0)
		    throw size;	
		// when exception is thrown,
		// control goes directly to catch block.

		int *arr = new int[size];
		for(int cnt = 0; cnt < size; cnt++){
		    arr[cnt] = 101 + cnt;
		}
		cout << "arr: ";
		for(int cnt = 0; cnt < size; cnt++){
		    cout << arr[cnt] << " ";
		}
		cout << endl;
		delete[] arr;
	}catch(int x){
		cout << "size cannot be " << x <<endl;
	}
}

