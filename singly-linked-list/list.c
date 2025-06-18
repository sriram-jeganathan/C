#include "list.h"

Node *head = NULL;
Node *tail = NULL;

void add_node( int x ) {
	Node *newNode = malloc ( sizeof(Node));
	newNode->number = x;
	newNode->next = NULL;

	if ( NULL == head ) {
		head = newNode;
		tail = newNode;
	} else {
		tail->next = newNode;
		tail = tail->next;
	}
}

void print_list() {
	Node *currentNode = head;
	printf("List in ascending order: \n");
	while ( NULL != currentNode ) {
		printf("%d -> ", currentNode->number);
		currentNode = currentNode->next;
	}
	printf("NULL\n");
}

void reverse_print( Node *currentNode, Node *previousNode ) {
	
	if ( currentNode == NULL ) {
		return;
	}
	reverse_print(currentNode->next,currentNode);
	printf("%d ->", currentNode->number);
}

void print_list_in_reverse(){
	printf("List in descending order: \n");
	reverse_print(head,NULL);
	printf("NULL\n");
}



void reverse(Node *current, Node *previous) {
	if ( NULL == current ) {
		return;
	}
	reverse( current->next, current );
	current->next = previous;
}

void reverse_list() {
	Node *temp;
	reverse(head,NULL);
	temp = head;
	head = tail;
	tail = temp;
}
