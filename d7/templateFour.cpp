#include<iostream>
using namespace std;
class Test{
    int data;
public:
    Test(int x=0):data(x){}
    friend ostream& operator<<(ostream& out, Test obj){
        out << "Test data: " << obj.data;
        return out;
    }
};



void fun(int var){  // specialized function
    cout << "Int version: " << var << endl;
}


// explicit call of a template function:

// please note that the naming functions for different datatypes 
// is done internally by compiler.
// This is quite the same as name mangling.
// you can check by doing "$nm ./a.exe or nm ./a.out"


// simple example of template function:
template<typename T>
void fun(T var){    // generalized function:
    cout << "var: " << var << endl;
}


int main(){
    // Not passing data type as an argument, 
    // then compiler prefers specialized call
    fun(10); 
    fun<float>(10.234f);    // Explicit call
    fun<double>(10.234);    // Explicit call
    fun<char>('a');
    fun<string>("Some string here");
    // directly passing object to fun()
    fun<Test>(Test(123));
}