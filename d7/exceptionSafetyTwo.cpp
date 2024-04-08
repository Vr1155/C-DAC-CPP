
#include<iostream>
using namespace std;

class Test{
	int data;
public:
	Test(int x=0):data(x){cout<<"Test(" << x << ")"<<endl;}
	~Test(){cout << "~Test()"<<endl;}
};

// notice that this recursive function
// is using dynamic memory allocation
// and throws exception deep inside a recursive function call.
//
// Therfore, destructor runs only once,
// and the memory allocated in previous recursive calls
// is not deallocated this can cause memory leaks
void recur(int num){
	Test *ptr = new Test(num);
	if(num <= 5){
		cout << num << " ";
		recur(num+1);
		cout << num << " ";
	}
	delete ptr;
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
