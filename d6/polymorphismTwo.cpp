#include<iostream>
using namespace std;

class B{
public:
    void fun(){
        cout << "B::fun()" << endl;
    }
};


class D: public B{
public:
    void fun(){
        cout << "D::fun()" << endl;
    }
};

int main(){
    // using objects through pointers in-directly

    B b, *bPtr;
    b.fun();
    D d;
    bPtr = &b;
    bPtr->fun();    // (1)
    bPtr = &d;
    bPtr->fun();    // (2)

    // as you can see in (2), 
    // despite pointing to a derived class object,
    // since the pointer is from base class,
    // it runs the base class function only.
}