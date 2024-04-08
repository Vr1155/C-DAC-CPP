#include<iostream>
using namespace std;

int main(){
    char ch;
    // using get() inside cin object
    while(cin.get(ch)){
        cout << ch;
    }
}