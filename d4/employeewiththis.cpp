#include<iostream>
using namespace std;

class Employee{	
// By default, everything is private in class, even if you remove "private:", 
// these class variables will still be private	
private:
	const int id;	// const 
	string name;	// normal
	mutable double salary;	// mutable
	static int idCounter;	// declaration of static members

// use "public:" to explicitly specify what you want to make public
// whether its functions or class variables.
public:
	Employee(); 			// Function with default arguments
	Employee(const char*, double);	// 3 parameterized constructor
	void acceptDetails();		 
	void dispDetails();
	void dispDetails() const;		// declaring a constant function
};


int main(){
	const Employee a("AAAA", 14234.5423);	// object is constant
	a.dispDetails();			// can call member constant functions only
	
	Employee b;	
	// default constructor without arguments called, 
	// dont use b() as compiler assumes its not an object.
	b.acceptDetails();
	b.dispDetails();
}


// We have to use id(var) because, id is a constant.
// This is called initializer list:

// Notice that you dont have to pass static variables as arguments,
// but they are still used in initializer list:

Employee::Employee():id(Employee::idCounter++){

}

Employee::Employee(const char* name, double salary):id(Employee::idCounter++){
	// Notice how this operator
	// helps eliminate ambiguity 
	// between local variable and instance variable.
	
	this->name = name;
	this->salary = salary;
	 
}

void Employee::acceptDetails(){
	cout << "Enter name and salary: \n";
	cin >>  name >> salary;
}

void Employee::dispDetails() const{
	cout << "Const id: " << id << "\tname: " << name << "\tSalary: " << salary << fixed << endl;
	salary+=10000;	// This will throw an error unless sal is declared as mutable
	cout << "Const id: " << id << "\tname: " << name << "\tSalary: " << salary << fixed << endl;

}


void Employee::dispDetails() {
	cout << "Non-const id: " << id << "\tname: " << name << "\tSalary: " << salary << fixed << endl;
	salary+=10000;
	cout << "Non-const id: " << id << "\tname: " << name << "\tSalary: " << salary << fixed << endl;
} 

int Employee::idCounter = 10001; // definition of static variables
// if definition of static variable is missing, you will get ld error for undefined reference.
