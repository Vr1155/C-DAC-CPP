#include <iostream>
using namespace std;

// passing arguments to lambda functions:
int main(){
	auto fun[](int a, int b){
		cout << "Hello World" << endl;
		return a+b;
	};

	cout << "Calling fun..." << fun(10, 20) << endl;
}
