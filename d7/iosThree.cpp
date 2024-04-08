#include <iostream>
#include<fstream>
using namespace std;

int main(){
    char ch;
    // creating an object of ifstream
    // it reads from the file passed as argument.
    // therefore in this case output will be this file itself.
    ifstream in("iosThree.cpp");
    while(in.get(ch)){
        cout << ch;
    }
}