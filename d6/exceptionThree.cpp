
#include<iostream>
using namespace std;

void createNPrintArr(int);

int main(){
	// When there is no try catch block,
	// the program will terminate immediately.
	
	createNPrintArr(10);	// runs normally
	createNPrintArr(20);	// runs normally
	createNPrintArr(-20);	// will throw exception
	createNPrintArr(50);	// this line will not execute
}

void createNPrintArr(int size){
        if(size < 0)
            throw size;	
	// when exception is thrown,
	// Program immediately terminates

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

