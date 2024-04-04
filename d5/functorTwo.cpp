#include<iostream>
using namespace std;

// functors are basically classes that behave like functions,
// due to operator overloading of "()". 

class Test{
    int data;
public:
    Test(int x=0): data(x){}
    void operator()(){
        cout << "operator() called... " << data << endl;
    }
    void operator()(int x){
        cout << "operator(" << x << ") called... " << data << endl;
    }
};

int main(){
    Test obj = 100; // parameterized constructor called.
    // overloaded operator () being used:
    obj();
    obj(10);
}