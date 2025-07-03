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

List* copyList ( List *list ) {
	List *newList = createList();
	Node *current = list->head;

	while ( NULL != current ) {
		addNode ( newList, current->data );
		current = current->next;
	}

	return newList;
}
