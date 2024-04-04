#include<iostream>
using namespace std;

class Base{
public:
    Base(){
        cout << "Base::Base()"<<endl;
    }
    ~Base(){cout << "Base::~Base()"<<endl;}
};

class Derived: Base{
public:
    Derived(){cout << "Derived()" << endl;}
    ~Derived(){cout << "~Derived()" << endl;}

};

int main(){
    Derived d;

}