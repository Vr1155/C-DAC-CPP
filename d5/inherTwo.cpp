#include<iostream>
using namespace std;

class Test{
    int data;
public:
    Test(int x=0):data(x){}
    void print(){cout << "Data: " << data << endl;}
};

class SomeTest: Test{   // In class, by default access specifier keyword is private

};

struct SomeTestStruct: Test{  // In struct, by default access specifier keyword is public


};

int main(){
    SomeTestStruct st;
    st.print();
}