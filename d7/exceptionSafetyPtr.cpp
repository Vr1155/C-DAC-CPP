#include<iostream>
using namespace std;

class Test{
	int data;
public:
	Test(int x=0):data(x){cout<<"Test(" << x << ")"<<endl;}
	~Test(){cout << "~Test()"<<endl;}
};

int main(){
	try{
		cout << "Statement #1\n";
		// dynamic memory allocation usign pointer:
		Test *ptr = new Test(100);
		// destructor is NOT called before exception is thrown
		throw 10;
		cout << "Statement #2\n";
		// this code will not run
		delete ptr;

		// As you can see, this can cause memory leaks

	}catch(int x){
		cout << "Caught " << x << endl;
	}
	cout << "Statement #3\n";
}
