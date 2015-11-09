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

void remove(){


}

void fetch(){


}

void print(){
	Node* temp = head;
	while(temp!=NULL){
		std::cout << temp -> data << std::endl;
		temp = temp -> link; // -> is same as temp.link
	}

}

int main(){
	head = NULL;
	std::cout << "Please enter size of list" << std::endl;
	int n;
	std::cin >> n;
	for(int i=0;i<n;i++){
		std::cout << "Please enter a number" << std::endl;
		int x;
		std::cin >> x;
		insert(x);
	}
	print();

	return 0;	
}

// Trees, Tries, & Graphs

// Stack and Queues

// Heaps

// Vectors/ ArrayList

// Hash table
