#include "list.h"

List* createList ( void ) {
	List *list = malloc ( sizeof ( List ) );
	list->head = NULL;
	list->tail = NULL;
	return list;
}

void addNode ( List *list, int x ) {
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
}

void forwardPrint ( List *list ) {
	Node *current = list->head;

	while ( NULL != current ) { 
		printf ( "%d\t", current->data );
		current = current->next;
	}
	printf ( "\n" );
}


void forwardPrint ( List* );
void backwardPrint ( List* );
List reverse ( List*, Node*, Node* );
void reverseList ( List* );
void insertHead ( List*, int );
void insertTail ( List*, int );
void insertMiddle ( List*, int, int );
void deleteHead ( List* );
void deleteTail ( List* );
void deleteMiddle ( List*, int );
List* copyList ( List* );
int countList ( List* );
void searchNode ( List*, int );
