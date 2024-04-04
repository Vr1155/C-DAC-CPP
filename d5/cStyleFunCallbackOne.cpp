#include<iostream>
using namespace std;


// Example of a function taking function callback as an argument
// by using function pointers (C style).
void funCaller(void (*)());
void fun();
void funOne();

int main() {
    funCaller(fun);
    funCaller(funOne);
}

void funCaller(void (*fPtr)()){
    cout << "Before functionality...." << endl;
    fPtr();
    cout << "After ........................\n";
}

void fun(){
    cout << "fun() called" << endl;
}

void funOne(){
    cout << "funOne() called" << endl;
}
