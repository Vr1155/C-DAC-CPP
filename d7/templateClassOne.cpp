#include<iostream>
using namespace std;

// creating a template class which is instantiated using constructor,
// and displayed with disp() function:
template <typename T>
class Test{
    T data;
public:
    Test(T arg = T()):data(arg){}
    void disp(){
        cout << "Data: " << data << endl;
    }
};

int main(){
    Test<int> iObj(100);
    Test<double> dObj(10234.345);
    Test<const char*> pcObj("Whatever you want");

    iObj.disp();
    dObj.disp();
    pcObj.disp();
}

