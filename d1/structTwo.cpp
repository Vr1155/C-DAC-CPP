#include<iostream>

using namespace std;

struct Employee {
	int id;
	string name;
	double salary;
};

typedef struct Employee record;

void printDetails(record); // call by value
void acceptDetails(record&); // call by reference

int main(){
	record details;

	acceptDetails(details);
	
	printDetails(details);
	return 0;
}

void printDetails(record var){
	cout << "Printing employee details:\n";
	cout << "ID: "  << var.id << ", Name: " << var.name << ", Salary: " << var.salary << "\n";
}

void acceptDetails(record &var){
	cout << "Enter employee details (id firstname salary)\n";
	cin >> var.id >> var.name >> var.salary;
}



