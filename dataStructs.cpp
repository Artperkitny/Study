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
		if (temp2 -> link == NULL && n-1>=i){
			std::cout << "selected index out of range" << std::endl;
			return;
		}
		temp2 = temp2 -> link;
	}
	temp1 -> link = temp2 -> link;
	temp2 -> link = temp1;
}

void remove(){


}

void fetch(){


}

void print(){
	Node* temp = head;
	std::cout<<std::endl;
	while(temp!=NULL){
		std::cout << temp -> data << std::endl;
		//std::cout << temp -> link << std::endl;
		temp = temp -> link; // -> is same as temp = (*temp).link
	}

}

int main(){
	head = NULL;
	std::cout << "Please enter size of list" << std::endl;
	int n;
	std::cin >> n;
	for(int i=0; i<n; i++){
		std::cout << "Please enter a number" << std::endl;
		int x;
		std::cin >> x;
		insert(x);
	}
	insert(75,3);
	insert(175,5);
	print();

	return 0;	
}

// Trees, Tries, & Graphs

// Stack and Queues

// Heaps

// Vectors/ ArrayList

// Hash table
