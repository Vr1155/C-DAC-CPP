#include<iostream>
using namespace std;

class B{
public:
    virtual void fun(){
        cout << "B::fun()" << endl;
    }
};

class D: public B{
public:
    void fun(){
        cout << "D::fun()" << endl;
    }
};

void funCaller(B &bRef){
    bRef.fun();
}

int main(){
    // using objects through pointers in-directly
    B b, *bPtr;
    b.fun();
    D d;
    bPtr = &b;
    bPtr->fun();    // (1)
    bPtr = &d;
    bPtr->fun();    // (2)

    // As seen above,
    // in (2) derived class fun() gets called
    // this is because the base class function is a virtual function.
    // Therefore at runtime, derived class gets invoked during function call.

    cout << "=======================================\n";

    B b1;
    D d1;
    funCaller(b1);
    funCaller(d1);
}