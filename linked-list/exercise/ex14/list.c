#include "list.h"

List* add_node( List* list, int x ) {
	Node* newNode = malloc ( sizeof ( Node ) );
	newNode->number = x;
	newNode->next = NULL;

	if ( NULL == list->head ) {
		list->head = newNode;
		list->tail = newNode;
	} else {
		list->tail->next = newNode;
		list->tail = newNode;
	}
}

List* create_list( void ) {
	int length = 0;
	printf("Enter length of list: ");
	scanf("%d", &length );
	list->size = length;

	List *list = malloc ( sizeof ( List ) );
	list->head = NULL;
	list->tail = NULL;

	for ( int i = 1; i <= length; i++ ) {
		int number = 0;
		printf("Enter Number: ");
		scanf("%d", &number );
		add_node( list, number );
	}
	return list;
}

void print_list( List* list ) {
	Node *current = list->head;
	while ( NULL != current ) {
		printf("%d\t", current->number);
		current = current->next;
	}
}

void palindrome ( List *list ) {
	int middle =  ( list->size - 1 ) / 2;
	for ( int i = 0; i < middle 
}

