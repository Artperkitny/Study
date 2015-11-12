#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// --- Linked List --- //

// Singly Linked List Data Stucture
struct Node{
	int data;
	Node* link;
};

Node* head;

void insert(int x){
	Node* temp = new Node();
	temp -> data = x;
	temp -> link = head;
	head = temp;
}

void insert(int x, int n){
	Node* temp1 = new Node(); // allocate heap memory for the new node
	temp1 -> data = x;
	temp1 -> link = NULL;
	if (n==1){
		temp1 -> link = head;
		head = temp1;
		return;
	}
	Node* temp2 = head;
	for(int i=0; i<n-2; i++){
		temp2 = temp2 -> link;
		if (temp2 -> link == NULL && i+1<n-2){
			std::cout << "selected index out of range" << std::endl;
			return;
		}
	}
	temp1 -> link = temp2 -> link;
	temp2 -> link = temp1;
}

void remove(int n){
	Node* temp1 = new Node();
	temp1 = head;
	if (n==1){
		head = temp1 -> link;
		delete(temp1);
		return;
	}
	Node* temp2 = new Node();
	temp2 = head;
	for(int i=0;i<n-2;i++){
		temp2 = temp2 -> link;
		if (temp2 -> link == NULL && i<n-2){
			std::cout << "selected index out of range" << std::endl;
			return;
		}
	}
	temp1 = temp2 -> link;
	temp2 -> link = temp1 -> link;
	delete(temp1);
}

void fetch(int n){


}

void reverse(){
	Node *current, *prev, *next;
	current = head;
	prev = NULL;
	while(current!=NULL){
		next = current -> link;
		current->link = prev;
		prev = current;
		current = next;
	}
	head = prev;
}

void print(){
	Node* temp = head;
	while(temp!=NULL){
		std::cout << temp -> data;
		temp = temp -> link; // -> is same as temp = (*temp).link
	}
	std::cout<<std::endl;
}

void recursive_print(Node* temp){
	if(temp==NULL){
		std::cout<<std::endl;
		return;
	}
	std::cout<<temp->data;
	recursive_print(temp->link);
}

void recursive_print_reverse(Node* temp){
	if(temp==NULL){ // exit condition
		return;
	}
	recursive_print_reverse(temp->link);
	std::cout<<temp->data;
}

void recursive_reversal(Node* temp){
	if(temp->link ==NULL){
		head = temp; // 3
		return;
	}
	recursive_reversal(temp->link);
	Node* temp2 = temp -> link;
	temp2 -> link = temp;
	temp -> link = NULL;
}

// Doubly Linked List Data Stucture
struct Double_Node{
	int data;
	Double_Node* prev;
	Double_Node* next;
};

Double_Node* head2;

void insert2(int x){
	Double_Node* temp = new Double_Node();
	Double_Node* temp2;
	if(head2==NULL){
		temp -> next = NULL;
		temp -> prev = NULL;
		temp -> data = x;
		head2 = temp;
		return;
	}
	temp2 = head2;
	temp -> next = temp2;
	temp -> prev = NULL;
	temp -> data = x;
	temp2 -> prev = temp;
	head2 = temp;
}

void print2(){
	Double_Node* temp = head2;
	while(temp!=NULL){
		std::cout<<temp->data;
		temp = temp->next;
	}
	std::cout<<std::endl;
}

void remove2(int n){
	Double_Node* temp = head2;
	if(n==1){
		temp -> next -> prev = NULL;
		head2 = 	temp -> next;
		delete(temp);
		return;
	}
	temp = temp->next;
	for(int i=0;i<n-2;i++){
		if(temp->next==NULL && i<n-2){
			std::cout << "selected index out of range" << std::endl;
		}
		temp = temp->next;
	}
	temp -> prev -> next = temp -> next;
	if (temp->next == NULL){
			delete(temp);
			return;
	}
	temp -> next -> prev = temp -> prev;
	delete(temp);
}

int main(){
	head = NULL;
	head2 = NULL;

	insert2(1); // 1
	insert2(2); // 2,1
	insert2(3); // 3,2,1
	insert2(4); // 4,3,2,1
	insert2(5); // 5,4,3,2,1
	print2();
	remove2(1);
	print2(); // 4,3,2,1
	remove2(4);
	print2(); // 4,3,2

	return 0;
}

// Trees, Tries, & Graphs

// Stack and Queues

// Heaps

// Vectors/ ArrayList

// Hash table
