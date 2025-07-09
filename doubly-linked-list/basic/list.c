#include "list.h"

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
}

List* createList ( void ) {
	List *list = malloc ( sizeof ( List ) );
	list->head = NULL;
	list->tail = NULL;
	return list;
}

void forwardPrint ( List *list ) {
	Node *current = list->head;
	while ( NULL != current ) {
		printf("%d\t", current->data );
		current = current->next;
	}
	printf("NULL\n");
}

void backwardPrint ( List *list ) {
	Node *current = list->tail;
	while ( NULL != current ) {
		printf("%d\t", current->data );
		current = current->previous;
	}
	printf("NULL\n");
}

int countNode ( List *list ) {
	Node *current = list->head;
	int count = 0;
	while ( NULL != current ) {
		count++;
		current = current->next;
	}
	return count;
}

Node* reverse ( Node *current ) {
	if ( current == NULL ) {
		return NULL;
	}
	Node* temp = current->next;
	current->next = current->previous;
	current->previous = temp;

	if ( current->previous == NULL ) {
		return current;
	}

	return reverse ( current->previous );
}

void reverseList ( List *list ) {
	if ( list == NULL || list->head == NULL ) {
		return;
	}

	Node *newHead = reverse ( list->head );

	Node *temp = list->head;
	list->head = list->tail;
	list->tail = temp;
}


/*
void insertHead ( List*, int );
void insertNode ( List*, int, int );
void insertTail ( List*, int );
void deleteHead ( List* );
void deleteTail ( List* );
void deleteNode ( List*, int );
void searchNode ( List*, int );
void sortList ( List* );
List* mergeList ( List*, List* );
List* copyList ( List* );
 */
