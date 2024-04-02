#include<iostream>
using namespace std;

class Test{
	char name[30];
	int len;
public:
	void print(){
		cout << "Name: " << name << "\tLen: " << len << endl;
	}
	void acceptTest(){
		cout << "Enter name and len: ";
		cin >> name >> len;
	}
};

int main(){
	Test obj;
	obj.print();
}
