#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdio>
#include <ctime>

// Linked List

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

void insert(int x, int n){ // does not handle if int n is < 2  than lenght of LL
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

void fetch(){


}

void reverse(){
	Node *current, *prev, *next;
	current = head;
	prev = NULL;
	while(current!=NULL){
		next = current -> link; // 2nd, 3rd, 4th, 5th, NULL
		current->link = prev; // 1st = NULL, 2nd = 1st, 3rd = 2nd, 4th = 3rd, 5th = 4th
		prev = current; // 1st, 2nd, 3rd, 4th, 5th
		current = next; // 2nd, 3rd, 4th, 5th, NULL 
	}
	head = prev;
}

void print(){
	Node* temp = head;
	std::cout<<std::endl;
	while(temp!=NULL){
		std::cout << temp -> data;
		//std::cout << temp -> link << std::endl;
		temp = temp -> link; // -> is same as temp = (*temp).link
	}
	std::cout << std::endl;

}

int main(){
	head = NULL;
	// std::cout << "Please enter size of list" << std::endl;
	// int n;
	// std::cin >> n;
	// for(int i=0; i<n; i++){
	// 	std::cout << "Please enter a number" << std::endl;
	// 	int x;
	// 	std::cin >> x;
	// 	insert(x);
	// }

	insert(5); // 1
	insert(4); // 2,1
	insert(3); // 3,2,1
	insert(2); // 4,3,2,1
	insert(1); // 5,4,3,2,1

	print();

	reverse();

	print();

	return 0;	
}

// Trees, Tries, & Graphs

// Stack and Queues

// Heaps

// Vectors/ ArrayList

// Hash table
