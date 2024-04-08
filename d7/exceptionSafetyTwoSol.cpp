

#include<iostream>
using namespace std;

class Test{
	int data;
public:
	Test(int x=0):data(x){cout<<"Test(" << x << ")"<<endl;}
	~Test(){cout << "~Test()"<<endl;}
};

// notice that this recursive function
// is using normal objects in C++
// and throws exception deep inside a recursive function call.
//
// Here, destructor is called immediately before the exception is thrown
// and the memory allocated in previous recursive calls
// is deallocated properly and there is no memory leak.
//
// This is because destructor of local objects are always called
// when exception is thrown.
// This is called unwinding of stack or simply "stack unwinding".
// for more info see: https://www.ibm.com/docs/en/zos/2.4.0?topic=only-stack-unwinding-c

// But what if we WANT to use pointer to an object?

void recur(int num){
	Test obj(num);
	if(num <= 5){
		cout << num << " ";
		recur(num+1);
		cout << num << " ";
	}
	throw num;
}

int main(){
	try{
		recur(1);
	}catch(int x){
		cout << "Caught " << x << endl;
	}
	cout << "Final Statement\n";
}
