#include<iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};

class LinkedList{
	Node* first;
public:

	Node* createNode(){
		int i;
		cout << "Enter the integer value of new node\n";
		cin >> i;
		Node* n = (struct Node*)malloc(sizeof(struct Node));
		n->data = i;
		n->next = nullptr;
		return n;
	}

	void initialize(){
		first = nullptr;
		cout << "Linked List initialized\n";
	}

	void addAtBeg(){
		Node* New = createNode();
		if(first == nullptr){
			first = New;
		}
		else{
			New->next = first;
			first = New;
		}
	}

	void addAtEnd(){
		Node* New = createNode();
		if(first == nullptr){
			first = New;
		}
		else{
			Node* temp = first;
			while(temp->next != nullptr){
				temp = temp->next;
			}
			temp->next = New;
		}
	}

	void addAtPos(int pos){
		if(pos == 1){
			addAtBeg();
			return;
		}
		
		Node* New = createNode();

		if(first == nullptr){
			first = New;
		}
		else{
			Node* temp = first;
			int count = 1;
			while(temp->next != nullptr && count < pos-1){
				temp = temp->next;
				count++;
			}

			if(pos > count+1){
				cout << "That position does not exist\n";
				return;
			}

			New->next = temp->next;
			temp->next = New;
		}
	}

	void disp(){
		cout << "Printing list:\n";
		Node* temp = first;
		while(temp != nullptr){
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << "\n";
	}

};


int main(){
	LinkedList L;
	L.initialize();
	L.addAtBeg();
	L.disp();
	L.addAtEnd();
	L.disp();
	L.addAtPos(2);
	L.addAtPos(4);
	L.addAtPos(1);
	L.disp();
	cout << "OK\n";
	return 0;
}
