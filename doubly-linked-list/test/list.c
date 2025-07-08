#include "list.h"

void addNode ( List *list, int x ) {
	Node *newNode = malloc ( sizeof ( Node ) );
	newNode->data = x;
	newNode->next = NULL;
	newNode->previous = NULL;
	
	if ( list->head == NULL ) {
		list->head = newNode;
		list->tail = newNode;
		return;
	}
	list->tail->next = newNode;
	newNode->previous = list->tail;
	list->tail = newNode;
		
}

List* createList ( void ) {
	List* list = malloc ( sizeof ( List ) );
	list->head = NULL;
	list->tail = NULL;
	return list;
}

void forwardPrint ( List *list ) {
	printf("\nForward Print\n");
	Node *current = list->head;
	while ( NULL != current ) {
		printf("%d\t", current->data );
		current = current->next;
	}
	printf("\n");
}

void backwardPrint ( List *list ) {
	printf("\nBackward Print\n");
	Node *current = list->tail;
	while ( NULL != current ) {
		printf("%d\t", current->data );
		current = current->previous;
	}
	printf("\n");
}

int countSize ( List *list ) {
	Node *current = list->head;

	int count = 0;
	while ( NULL != current ) {
		count++;
		current = current->next;
	}
	return count;
}

void insertAfter ( List* list, int value, int after ) {
	printf( "\nInserted %d after %d!\n", value, after );

	Node *current = list->head;

	Node *newNode = malloc ( sizeof ( Node ) );
	newNode->data = value;
	newNode->previous = NULL;
	newNode->next = NULL;

	int check = 0;
	while ( NULL != current ) {
		if ( current->data == after ) {
			check = 1;
			break;
		}
		current = current->next;
	}
	if ( 0 == check ) {
		printf("The value is invalid in the list!");
		return;
	}
	Node *temp = current->next;
	current->next = newNode;
	newNode->previous = current;
	newNode->next = temp;
	temp->previous = newNode; 
	free(temp);
}

void insertBefore ( List* list, int value, int after ) {
	printf( "\nInserted %d before %d!\n", value, after );

	Node *current = list->head;

	Node *newNode = malloc ( sizeof ( Node ) );
	newNode->data = value;
	newNode->previous = NULL;
	newNode->next = NULL;

	int check = 0;
	while ( NULL != current ) {
		if ( current->data == after ) {
			check = 1;
			break;
		}
		current = current->next;
	}
	if ( 0 == check ) {
		printf("The value is invalid in the list!");
		return;
	}

	Node *temp = current->previous;
	current->previous = newNode;
	newNode->next = current;
	newNode->previous = temp;
	temp->next = newNode; 
}


void insertHead ( List *list, int x ) {
	printf("\nHead inserted");
	Node *newNode = malloc ( sizeof ( Node ) );
	newNode->data = x;
	newNode->next = NULL;
	newNode->previous = NULL;

	newNode->next = list->head;
	list->head->previous = newNode;
	list->head = newNode;
}


void insertTail ( List *list, int x ) {
	printf("\nTail inserted");
	Node *newNode = malloc ( sizeof ( Node ) );
	newNode->data = x;
	newNode->next = NULL;
	newNode->previous = NULL;
	
	list->tail->next = newNode;
	newNode->previous = list->tail;
	list->tail = newNode;
}


void deleteHead ( List *list ) {
	printf("\nHead Deleted");

	Node *current = list->head;
	current = current->next;

	list->head->next = NULL;
	list->head->previous = NULL;
	free(list->head);
	list->head = current;
}

void deleteTail ( List *list ) {
	printf("\nTail Deleted");

	Node *current = list->tail;
	current = current->previous;
	current->next = NULL;

	list->tail->next = NULL;
	list->tail->previous = NULL;
	free(list->tail);
	list->tail = current;
}




void deleteMiddle ( List *list ) {
	int count = countSize ( list );
	Node* current = list->head;

	for ( int i = 0; i < count/2; i++ ) {
		current = current->next;
	}
	Node *temp1 = current->previous;
	Node *temp2 = current->next;

	current->next = NULL;
	current->previous = NULL;
	current = NULL;
	temp1->next = temp2;
	temp2->previous = temp1;
	free(temp1);
	free(temp2);
}
/*
void Search ( List*, int );
*/

