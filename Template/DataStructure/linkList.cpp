#include <bits/stdc++.h> 
using namespace std;

class Node{ 
public:  
	int data; 
	Node* next; 
}; 

void printList(Node* node){ 
	while (node != NULL){ 
		cout << node->data << " "; 
		node = node->next; 
	} 
}

void deleteList(Node** head){ 
	Node* current = *head;
	Node* next;
	while (current != NULL){
		next = current->next;
		free(current);
		current = next;
	} 
	*head = NULL;  
} 

