#include<iostream>
using namespace std;

class Test{
    int data;
public:
    Test(int x=0):data(x){}
    void print(){cout << "Data: " << data << endl;}
};

class SomeTest:public Test{

};

int main(){
    SomeTest st;
    st.print();
}