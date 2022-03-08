#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

void push(Node** head_ref, int new_data){
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void deleteFirst(Node** head){
	Node* temp = *head;
	(*head) = temp->next;
}

void deleteAfter(Node* prevNode){
	prevNode->next = prevNode->next->next;
}

void deleteLast(Node** head){
	Node *temp = *head;
	while(temp->next->next != NULL)
		temp = temp->next;
	temp->next = NULL;
}

void printList(Node* node){
	while (node != NULL){
		cout << node->data << " ";
		node = node->next;
	}
}

int main(){
	Node* head = NULL;
	
	push(&head, 2);
	push(&head, 5);
	push(&head, 10);
	push(&head, 8);
	push(&head, 1);
	push(&head, 9);
	
	cout << "--- Created linked list --- " << endl;
	printList(head);
	
	cout << "\n\nDeletion :" << endl;
	deleteFirst(&head);
	printList(head);
	cout << endl;
	
	deleteLast(&head);
	printList(head);
	cout << endl;
	
	deleteAfter(head->next);
	printList(head);
	
	cout << "\n\n-- Updated linked list : " << endl ;
	printList(head);
	
	return 0;
}
