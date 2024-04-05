#include<iostream>
using namespace std;

void createNPrintArr(int);

int main(){
    try{
	createNPrintArr(10);	// runs normally
	createNPrintArr(20);	// runs normally
	createNPrintArr(-20);	// will throw exception
	createNPrintArr(50);	// this line will not execute
    }catch(int sz){
	// Whenever an exception is thrown in try block,
	// control jumps directly to catch block
        cout << "Size cannot be " << sz << endl;
    }
}

void createNPrintArr(int size){
        if(size < 0)
            throw size;	
	// when exception is thrown,
	// the control directly jumps to catch block in main function

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
}

