#include "list.h"

Node *head = NULL;
Node *tail = NULL;
long total = 0;

void add_node( int x ) {
	Node *newNode = malloc ( sizeof ( Node ) );
	newNode->number = x;
	newNode->next = NULL;

	if ( NULL == head ) {
		head = newNode;
		tail = newNode;
	} else {
		tail->next = newNode;
		tail = newNode;
	}
}

void print_list( void ) {
	Node *currentNode = head;
	while ( NULL != currentNode ){
		printf("%d -> ", currentNode->number );
		currentNode = currentNode->next;
	}
	printf("NULL\n");
}

long sum( void ) {
	Node *currentNode = head;
	while ( NULL != currentNode ){
		total += currentNode->number;
		currentNode = currentNode->next;
	}
	printf("%ld is the total\n", total);
}

void print_reverse( Node *current, Node *previous ) {
	if ( NULL == current ){
		return;
	}
	print_reverse(current->next, current);
	printf("%d ->", current->number );
}

long recursive_sum( Node* current, Node* previous ) {
	if ( NULL == current ){
		return 0;
	}

	recursive_sum( current->next, current );
	total += current->number;
	return total;
}

void print_sum( void ) {
	long x;
	total = 0;
	x = recursive_sum(head,NULL);
	printf("%ld is the sum using recursion\n", x);
}

void reverse_print( void ) {
	print_reverse(head,NULL);
	printf("NULL\n");
}

void reverse_list( Node* current, Node* previous ) {
	if ( NULL == current ) {
		return;
	}

	reverse_list(current->next, current);
	current->next = previous;
}

void reverse( void ) {
	Node* temp;
	reverse_list( head, NULL );
	temp = head;
	head = tail;
	tail = temp;
	
}











