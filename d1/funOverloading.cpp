#include<iostream>
using namespace std;

void fun();
void fun(int);
void fun(double);
void fun(string);
void fun(float);
void fun(char);

void fun(int, int);
void fun(double, double);
void fun(int, double);
void fun(double, int);

int main(){
	fun();

	fun(10);
	fun(123.456);
	fun("Hello");
	fun(52342.234f);
	fun('A');

	fun(3254,2342);
	fun(423.234, 234.243);
	fun(4234, 4234.24);
	fun(234.23423, 4234);
}

void fun(){
	cout << "void fun()\n";
}

void fun(int){
	cout << "void fun(int)\n";
}

void fun(double){
	cout << "void fun(double)\n";
}

void fun(string){
	cout << "void fun(string)\n";
}

void fun(float){
	cout << "void fun(double)\n";
}

void fun(char){
	cout << "void fun(char)\n";
}

void fun(int, int){
	cout << "void fun(int, int)\n";
}

void fun(double, double){
	cout << "void fun(double, double)\n";
}

void fun(double, int){
	cout << "void fun(double, int)\n";
}

void fun(int, double){
	cout << "void fun(int, double)\n";
}

