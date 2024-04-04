#include<iostream>
using namespace std;

class Base{
    int bData;

public:
    // presence of one or more virtual keyword,
    // will increase the size of class by 1 pointer.
    // regardless of how many virtual keywords are used.
    virtual void fun(){}
    virtual void funOne(){}
};

class Derived: public Base{
    int dData;
public:
    void fun(){}
    void funTwo(){}
};

int main(){
    // size of empty base class and derived class = 1 byte
    // This is the minimum requirement of a class.

    // As you add data members in each class,
    // you get more bigger and bigger size of classes.

    // virtual keyword adds one pointer to your object
    // no matter how many virtual keywords you use in your class,
    // the size of class will increase by 1 pointer only.
    // in 64 bit compiler, size will increase by 64 bits (8 bytes)
    // in 32 bit compiler, size will increase by 32 bits (4 bytes)

    cout << "Base: " << sizeof(Base) << endl;
    cout << "Derived: " << sizeof(Derived) << endl;
}