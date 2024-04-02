#include<iostream>
using namespace std;

class Employee{	
// By default, everything is private in class, even if you remove "private:", 
// these class variables will still be private	
private:
	const int id;
	string name;
	double sal;
// you have to explicitly specify what you want to make public
// whether its functions or class variables.
public:
	Employee(int = 0); 			// Function with default arguments
	Employee(int, const char*, double);	// 3 parameterized constructor
	void acceptDetails();		 
	void dispDetails();
};


int main(){

	Employee b = Employee(0);
	b.acceptDetails();
	b.dispDetails();

	Employee c(1001, "CCCCC", 52342.4234);
	c.acceptDetails();
	c.dispDetails();
}


// We have to use id(var) because, id is a constant.
// This is called initializer list:

Employee::Employee(int var):id(var){

}

Employee::Employee(int var, const char* nm, double sl):id(var),name(nm),sal(sl){
	 
}


void Employee::acceptDetails(){
	cout << "Enter name and salary: ";
	cin >>  name >> sal;
}

void Employee::dispDetails(){
	cout << "id: " << id << "\tname: " << name << "\tSalary: " << sal << endl;
}
