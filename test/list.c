#include "list.h"

Node *head = NULL;
Node *tail = NULL;

void add_node( int x ) {
	Node *newNode = malloc ( sizeof( Node ) );
	newNode->number=x;
	newNode->next = NULL;

	if ( NULL == head ) {
		head = newNode;
		tail = newNode;
	} else {
		//Connects the newNode after tail node
		tail->next = newNode;
		//Sets the tail to the newNode ( last Node )
		tail = tail->next;
	}
}

void print_list( void ) {
	Node *currentNode = head;
	while ( NULL != currentNode ){
		printf( "%d -> ", currentNode->number );
		currentNode = currentNode->next;
	}
	printf("NULL\n");
}

void reverse_print( Node *current, Node *previous) {
	
	if ( current == NULL ) {
		return;
	}

	reverse_print( current->next, current );
	printf("%d -> ", current->number);
}


void reverse( Node *current, Node *previous ) {	
	if ( current == NULL ) {
		return;
	}

	reverse( current->next, current );
	current->next = previous;	
}

void reverse_list( void ) {
	Node *temp;
	reverse ( head, NULL );
	temp = head;
	head = tail;
	tail = temp;
}
