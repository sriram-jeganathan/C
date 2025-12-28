#include "list.h"

Node* createList () {
	Node *head = malloc ( sizeof ( Node ) );
	head->next = NULL;
	return head;
}

void addNode ( Node *head, int val ) {
	Node *newNode = malloc ( sizeof ( Node ) );
	newNode->val = val;
	newNode->next = NULL;

	if ( head == NULL ) {
		head = newNode;
		return;
	}
	
	Node *current = head;
	
	while ( current != NULL ) {
		current = current->next;
	}
	current = newNode;
}

void addNodeBefore ( Node *head, int Before, int val ) {
	Node *newNode = malloc ( sizeof ( Node ) );
	newNode->val = val;
	newNode->next = NULL;

	if ( head = NULL ) {
		head = newNode;
		return 
	}

	Node *current = head;
	Node *previous;

	while ( current->next->val == Before ) {
		current = current->next;
	}


}
