#include<iostream>
using namespace std;

class Base{
public:
    Base(){
        cout << "Base::Base()"<<endl;
    }
    ~Base(){cout << "Base::~Base()"<<endl;}
};

int main(){
    Base b;

}