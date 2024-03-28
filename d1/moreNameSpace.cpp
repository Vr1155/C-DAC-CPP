#include<iostream>
using namespace std;


namespace Mine {
	int gVar = 100;
	void fun(){	// definition
		cout << "In Mine::fun()\n";
	}
}

namespace Yours {
	int gVar = 130;
	void fun(){	// definition
		cout << "In Yours::fun()\n";
	}
}

int main(){

	int gVar = 200;	// local variable
	cout << "Local: " << gVar << endl;
	cout << "Mine::gVar " << Mine::gVar << endl;
	cout << "Yours::gVar " << Yours::gVar << endl;
	Mine::fun();
	Yours::fun();
}





