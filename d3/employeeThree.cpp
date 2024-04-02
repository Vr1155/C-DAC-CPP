
#include<iostream>
using namespace std;

class Employee{	
// By default, everything is private in class, even if you remove "private:", 
// these class variables will still be private	
private:
	const int id;
	string name;
	mutable double sal;
// you have to explicitly specify what you want to make public
// whether its functions or class variables.
public:
	Employee(int = 0); 			// Function with default arguments
	Employee(int, const char*, double);	// 3 parameterized constructor
	void acceptDetails();		 
	void dispDetails();
	void dispDetails() const;		// declaring a constant function
};


int main(){
	const Employee a(1001, "AAAA", 14234.5423);	// object is constant
	a.dispDetails();				// can call member constant functions only
	
	Employee b(1002);
	b.acceptDetails();
	b.dispDetails();
}


// We have to use id(var) because, id is a constant.
// This is called initializer list:

Employee::Employee(int var):id(var){

}

Employee::Employee(int var, const char* nm, double sl):id(var),name(nm),sal(sl){
	 
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


