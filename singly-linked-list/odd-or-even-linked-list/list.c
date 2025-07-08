#include "list.h"

void addNode ( List* list, int x ) {
	Node *newNode = malloc ( sizeof ( Node ) );
	newNode->data = x;
	newNode->next = NULL;

	if ( NULL == list->head ) {
		list->head = newNode;
		list->tail = newNode;
		return;
	}

	list->tail->next = newNode;
	list->tail = newNode;
	return;
}

List* createList ( ) {
	List* list = malloc ( sizeof ( List ) );
	list->head = NULL;
	list->tail = NULL;

	return list;
}

void printList ( List* list ) {
	Node *current = list->head;

	while ( NULL != current ) {
		printf ( "%d\t", current->data );
		current = current->next;
	}
	printf ( "\n" );
	return;
}

void odd_or_even ( List *list, List *odd, List *even ) {
	Node *current = list->head;

	while ( NULL != current ) {

		if ( current->data % 2 == 0 ) {
			addNode ( even, current->data );
		} 
		if ( current->data % 2 != 0 ) {
			addNode ( odd, current->data );
		}
		current = current->next; 
	}
}
