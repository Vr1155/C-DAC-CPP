#include<iostream>
using namespace std;

// using class instead of structures in C++ :
class Employee {
	int id;
	string name;
	double salary;

public:	
	// functions along with data:	
	void printDetails(); 
	void acceptDetails();
};

int main(){
	Employee obj;
	obj.acceptDetails();
	obj.printDetails();
	return 0;
}

void Employee::printDetails(){
	cout << "Printing employee details:\n";
	cout << "ID: "  << id << ", Name: " << name << ", Salary: " << salary << "\n";
}

void Employee::acceptDetails(){
	cout << "Enter employee details (id firstname salary)\n";
	cin >> id >> name >> salary;
}



