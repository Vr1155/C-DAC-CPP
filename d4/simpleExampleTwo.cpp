#include<iostream>
using namespace std;

class Simple{
	int data;
public:
	Simple& getData(int data = 10){
		// this operator also helps eliminate ambiguity
		// when instance variables and local variables
		// have same name.
		this->data = data;
	}
	void printData(){
		cout << "Data: " << data << endl;
	}
};

int main(){
	Simple obj;
	obj.getData(100);
	obj.printData();
}
