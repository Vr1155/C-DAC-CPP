#include<iostream>
using namespace std;

class B{
public:
    virtual void fun(){
        cout << "B::fun()" << endl;
    }
    virtual void funOne(){
        cout << "B::funOne()" << endl;
    }
    virtual void funTwo(){
        cout << "B::funTwo()" << endl;
    }
};

class D: public B{
public:
    void fun(){
        cout << "D::fun()" << endl;
    }
    void funTwo(){
        cout << "D::funTwo()" << endl;
    }
};

// if you are confused by this:
// typedef void (*FPTR)(); // C style function pointer 
// see: https://stackoverflow.com/questions/4295432/typedef-function-pointer

// basically:
// typedef void (*myfunc)();   
// |
// V
// myfunc f;      // compile equally as  void (*f)();


using FPTR = void (*)();    // C++ style

void funCaller(B &b){
    // Here, basically we are storing storing the address of functions
    // in an array of addresses.

    // functions and virtual functions are stored in a stack.

    // here, functions in a class are stored in virtual table.

    // virtual pointers pointing to a function entry in virtual table:
    long *vptr = (long*)(&b);

    // virtual table filled with virtual pointers:
    FPTR *vtbl = (FPTR*)(*vptr);

    // executing each function in v-table:
    vtbl[0]();
    vtbl[1]();
    vtbl[2]();
    cout << "======================================\n";
}

int main(){
    B b;
    D d;
    funCaller(b);
    funCaller(d);
}