#include<iostream>
using namespace std;

struct Node{
	int Node;
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




