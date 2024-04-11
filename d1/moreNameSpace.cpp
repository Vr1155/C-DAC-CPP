#include<iostream>
using namespace std;

// Here two namespaces were created and we are specifying,
// which namespace to fetch data from by using the namespace name
// and the scope resolution operator along with identifier of variable


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





