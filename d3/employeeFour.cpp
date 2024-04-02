#include<iostream>
using namespace std;

class Employee{	
// By default, everything is private in class, even if you remove "private:", 
// these class variables will still be private	
private:
	const int id;	// const 
	string name;	// normal
	mutable double sal;	// mutable
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

Employee::Employee(const char* nm, double sl):id(Employee::idCounter++),name(nm),sal(sl){
	 
}

void Employee::acceptDetails(){
	cout << "Enter name and salary: \n";
	cin >>  name >> sal;
}

void Employee::dispDetails() const{
	cout << "Const id: " << id << "\tname: " << name << "\tSalary: " << sal << fixed << endl;
	sal+=10000;	// This will throw an error unless sal is declared as mutable
	cout << "Const id: " << id << "\tname: " << name << "\tSalary: " << sal << fixed << endl;

}


void Employee::dispDetails() {
	cout << "Non-const id: " << id << "\tname: " << name << "\tSalary: " << sal << fixed << endl;
	sal+=10000;
	cout << "Non-const id: " << id << "\tname: " << name << "\tSalary: " << sal << fixed << endl;
} 

int Employee::idCounter = 10001; // definition of static variables
// if definition of static variable is missing, you will get ld error for undefined reference.
