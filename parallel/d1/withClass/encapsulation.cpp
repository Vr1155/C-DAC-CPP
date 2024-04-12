// this file only contains the function definitions
// definitions = encapsulation

#include "abstraction.h"


ABC::ABC():data(0){

}

ABC::ABC(int x):data(x){

}

ABC::~ABC(){

}

void ABC::fun(){
	cout << "fun() running, current data is: " << data << endl;
}

void ABC:: funOne(){
	cout << "funOne() running, only output is printed!!!\n";
}

