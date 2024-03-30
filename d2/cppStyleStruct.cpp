
#include<iostream>

using namespace std;

// C++ style of using structures:

struct Employee {
	int id;
	string name;
	double salary;
	
	// functions along with data:
	
	void printDetails(); // call by value
	void acceptDetails(); // call by reference
};

typedef struct Employee record;



int main(){
	record details[5];
	for(auto i =0; i<5; i++)
		details[i].acceptDetails();
	for(auto i =0; i<5; i++)
		details[i].printDetails();
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



