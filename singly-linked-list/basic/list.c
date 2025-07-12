#include "list.h"

List* createList ( void ) {
	List* list = malloc ( sizeof ( List ) );
	list->head = NULL;
	list->tail = NULL;
	return list;
}

void addNode( List *list, int x ) {
	Node *newNode = malloc ( sizeof ( Node ) );
	newNode->number = x;
	newNode->next = NULL;

	if ( NULL == list->head ) {
		list->head = newNode;
		list->tail = newNode;
	} else {
		list->tail->next = newNode;
		list->tail = tail->next;
	}
}

void forwardPrint( List *list ) {
	Node *current = list->head;

	while ( NULL != current ) {
		printf("%d\t", current->number);
		current = current->next;
	}
	printf("NULL\n");
}

void reverse_print ( Node *current, Node *previous ) {
	
	if ( current == NULL ) {
		return;
	}
	reverse_print ( current->next,current );
	printf ( "%d\t", current->number );
}

void BackwardPrint ( List *list ) {
	reverse_print( list->head, NULL );
	printf("NULL\n");
}

void reverse(Node *current, Node *previous) {
	if ( NULL == current ) {
		return;
	}
	reverse( current->next, current );
	current->next = previous;
}

void reverseList ( List *list ) {
	Node *temp;
	reverse ( list->head, NULL );
	temp = list->head;
	list->head = list->tail;
	list->tail = temp;
}
