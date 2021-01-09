#include <bits/stdc++.h> 
using namespace std;

//Node* temp = (Node*) malloc(sizeof(Node));

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

void push(Node** head, int new_data){ 
    Node* new_node = (Node*) malloc(sizeof(Node)); 
    new_node->data  = new_data; 
    new_node->next = (*head); 
    (*head)    = new_node; 
} 

void deleteNode(Node **head, int position){ 
   if (*head == NULL) 
      return;
   Node* temp = *head;   
    if (position == 0) { 
        *head = temp->next;   
        free(temp);
        return; 
    }  
    for (int i=0; temp!=NULL && i<position-1; i++) 
         temp = temp->next;   
    if (temp == NULL || temp->next == NULL) 
         return; 
    Node *next = temp->next->next; 
    free(temp->next); 
    temp->next = next; 
} 

int main() 
{ 
	Node* head = NULL; 
	push(&head, 7); 
	push(&head, 1); 
	push(&head, 3); 
	push(&head, 2); 
		
	printList(head);

	deleteNode(&head, 1); 
	
	printList(head); 
	
	return 0; 
} 
© 2021 GitHub, Inc.
