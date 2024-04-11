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

// vTables and vPointers:
// Detailed explaination: https://www.geeksforgeeks.org/vtable-and-vptr-in-cpp/



// if you are confused by this:
// typedef void (*FPTR)(); // C style function pointer 
// see: https://stackoverflow.com/questions/4295432/typedef-function-pointer

// basically:
// typedef void (*myfunc)();   
// |
// V
// myfunc f;      // equivalent to void (*f)();


using FPTR = void (*)();    // C++ style

void funCaller(B &b){
    // Here, basically we are storing storing the address of functions
    // in an array of addresses.

    // functions and virtual functions are stored in a stack.

    // here, functions in a class are stored in virtual table.

    // typecast object reference to a long pointer
    // (This makes it easy to store its functions in an array):
    long *vptr = (long*)(&b);

    // virtual table filled with virtual pointers:
    FPTR *vtbl = (FPTR*)(*vptr);
    // if you notice *vtbl is a function pointer,
    // which is pointing to the first address in the array of 
    // function addresses of object b.

    // Now each function in that object is stored as a function address in an array.
    // and function pointer is pointing to the first address.
    // At 0th index we will find the first function, 
    // at 1st index we'll find second function and so on.
    // we can use [] syntax like we do with arrays.

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
