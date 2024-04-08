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
		Test obj;
		// destructor is immediately run before exception is thrown
		throw 10;
		cout << "Statement #2\n";

	}catch(int x){
		cout << "Caught " << x << endl;
	}
	cout << "Statement #3\n";
}
