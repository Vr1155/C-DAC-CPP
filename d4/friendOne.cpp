
#include<iostream>
using namespace std;

class Simple{
	int data;
	void getData(int x = 10){
		data = x;
	}
	void printData(){
		cout << "Data: " << data << endl;
	}

	// declaring that main() fn is a friend function
	friend int main();
};

int main(){

	// Since main() is now a friend function of Simple class,
	// it will have access to all private data members
	// and functions of Simple class.
	Simple obj;
	obj.getData(100).
	obj.printData();

}
