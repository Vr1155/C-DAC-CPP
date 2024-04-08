#include<iostream>
using namespace std;
class Test{
    int data;
public:
    Test(int x=0):data(x){}
    // overloading << operator so that,
    // we can output object values whenever "<<" is used:
    friend ostream& operator<<(ostream& out, Test obj){
        out << "Test data: " << obj.data;
        return out;
    }
};

// simple example of template function:
template<typename T>
void fun(T var){
    cout << "var: " << var << endl;
}

int main(){
    fun(10); // implicit call
    fun(10.234f);
    fun(10.234);
    fun('a');
    fun("Some string here");
    // creating object and passing to fun():
    Test tObj(100);
    fun(tObj);
}