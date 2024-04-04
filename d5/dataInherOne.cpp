#include<iostream>
using namespace std;

class Base{
    int bData;
};

class Derived: public Base{
    int dData;
};

int main(){
    // size of empty base class and derived class = 1 byte
    // This is the minimum requirement of a class.
    // As you add data members in each class,
    // you get more bigger and bigger size of classes.

    cout << "Base: " << sizeof(Base) << endl;
    cout << "Derived: " << sizeof(Derived) << endl;
}