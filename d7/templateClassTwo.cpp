#include<iostream>
using namespace std;

// creating a template class which is instantiated using constructor,
// and displayed with disp() function.
template <typename T>
class Test{
    T data;
public:
    Test(T arg = T()):data(arg){}

    // here we are only declaring the function:
    void disp();
};

// notice how we are specifying generic datatype inside <>
// and using scope resolution operator
// while defining a function from a template class
// outside the class:
template <typename T>
void Test<T>::disp(){
    cout << "Data: " << data << endl;
}

int main(){
    Test<int> iObj(100);
    Test<double> dObj(10234.345);
    Test<const char*> pcObj("Whatever you want");

    iObj.disp();
    dObj.disp();
    pcObj.disp();
}

