#include<iostream>
using namespace std;

// just a declaration of LL with Class:

struct Node{
	int data;
	Node* next;
	Node(int x=0);
};

class LinkedList{
	Node* first;
public:
	LinkedList();
	~LinkedList();

	void addAtBeg();
	void addAtEnd();
	void addAtPos(int);
	void disp();
};




