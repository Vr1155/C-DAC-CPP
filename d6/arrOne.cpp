#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the size: ";
    cin >> size;
    try{
        if(size < 0)
            throw size;

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
    }catch(int sz){
        cout << "Size cannot be " << sz << endl;
    }
}