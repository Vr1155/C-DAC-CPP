// TODO:
//
// Declare a Linked List class,
// Linked List, deep copy with assignment operator 
// (copy constructor as well as operator overloading of =).
// Linked List, merge 2 lists with + operator.
// (operator overloading of +).
//

#include<iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

class LL{

	Node* first = nullptr;

public:
	LL();
	LL(LL& obj);
	Node* createNode(int data);
	void addAtBeg(int data);
	void printList();
	void deleteAtBeg();
	int isFirstNull();
};

int main(){
	LL t;
	t.addAtBeg(10);
	t.addAtBeg(20);
	t.addAtBeg(30);
	t.addAtBeg(40);
	t.addAtBeg(50);

	t.printList();
	
	t.deleteAtBeg();
	
	t.printList();

	LL n = t;
	cout << "new list:\n";
	n.printList();
}

Node* LL::createNode(int data){
	Node* New = (struct Node*)malloc(sizeof(struct LL));
	New->data = data;
	New->next = nullptr;
	return New;
}

void LL::addAtBeg(int data){
	Node* ptr = createNode(data);
	ptr->next = first;
	first = ptr;
}

void LL::printList(){
	Node* temp = first;
	if(temp == nullptr){
		cout <<"Empty List\n";
	}
	while(temp != nullptr){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";
}

void LL::deleteAtBeg(){
	if(first == nullptr){
		cout << "Nothing to delete\n";
		return;
	}

	Node* temp = first;
	first = first->next;
	temp->next = nullptr;
	delete temp;
}

int LL::firstElem(){
	if(first == nullptr)
		return -1;
	else
		return first->data;
}

LL::LL(){
	this->first = nullptr;
}

LL::LL(LL& obj){ 
	cout << "copy constructor running \n";
	Node* temp
	while(temp != nullptr){
		obj.addAtBeg(temp->data);
		temp = temp->next;
	}
}
