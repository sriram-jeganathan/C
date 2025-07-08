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

int getCount ( List *list ) {
	Node *current = list->head;
	int count = 0;
	while ( NULL != current ) {
		count++;
		current = current->next;
	}
	return count;
}

int* convert ( List *list ) {
	Node *current = list->head;
	int size = getCount( list );
	list->count = size;
	int *array = malloc ( size * sizeof ( int ) );
	int index = 0;
	while ( NULL != current ) {
		array[index] = current->data;
		current = current->next;
		index++;
	}
	return array;
}
