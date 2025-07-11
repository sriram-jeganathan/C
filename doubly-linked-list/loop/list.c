#include "list.h"

List* createList ( void ) {
	List* list = malloc ( sizeof ( List ) );
	list->head = NULL;
	list->tail = NULL;
	return list;
}

void addNode ( List *list, int x ) {
	Node *newNode = malloc ( sizeof ( Node ) );
	newNode->data = x;
	newNode->next = NULL;
	newNode->previous = NULL;

	if ( NULL == list->head ) {
		list->head = newNode;
		list->tail = newNode;
		return;
	}

	list->tail->next = newNode;
	newNode->previous = list->tail;
	list->tail = newNode;

	list->tail->next = list->head;
	list->head->previous = list->tail;
}

void printList ( List *list ) {
	Node *current = list->head;
	
	while ( current->next != list->head ) {
		printf ( "%d\t", current->data );
		current = current->next;
		if ( current == list->tail ) {
			printf("%d\t\n", current->data );
		}
	}
	printf("\n");
}
