#include<iostream>

#ifndef N
#define N 5
#endif

using namespace std;

struct Employees {
	int id;
	string name;
	double salary;
};

typedef struct Employees record;

void printDetails( record (&ptr)[N], int i);
void acceptDetails( record (&ptr)[N], int i);

int main(){
	record details[N];
	cout << "Enter employee details (id, firstname, salary)\n";
	for(int i=0; i<N; i++){
		acceptDetails(details, i);
	}
	cout << "Printing employee details:\n";
	for(int i=0; i<N; i++){
		printDetails(details, i);
	}
	return 0;
}

void printDetails( record (&ptr)[N], int i){
	cout << ptr[i].id << "," << ptr[i].name << "," << ptr[i].salary << "\n";
}

void acceptDetails( record (&ptr)[N], int i){
	record New;
	cin >> New.id >> New.name >> New.salary;
	ptr[i] = New;
}



