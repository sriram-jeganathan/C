#include "list.h"


List *add_node( List *list,int x ) {
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

List* create_list ( void ) { 
	List *list = malloc ( sizeof ( List ) );
	list->head = NULL;
	list->tail = NULL;

	int x;
	printf("Enter number of digits: ");
	scanf("%d", &x);
	int y;
	
	for ( int i = 1; i <= x; i++ ) {
		printf("Enter Number: ");
		scanf("%d", &y);
		add_node( list, y );
	}
	return list;
}


void print_list( List *list ) {
	Node* current = list->head;
	while ( NULL != current ) {
		printf("%d  ", current->number);
		current = current->next;
	}
	printf("\n");
}

int count_list( List* list ) {
	Node *current = list->head;
	int count = 0;
	while ( NULL != current ) {
		count++;
		current = current->next;
	}
	return count;
}

void delete_middle_node( List *list ) {
	int x = count_list ( list );
	int middle = x / 2;
	Node *previous;
	Node *current = list->head;
	for ( int i = 0; i <= middle; i++ ) {
		if ( i == middle-1 ) {
			previous = current;
		}
		if ( i == middle ) {
			previous->next = current->next;
			free ( current );
		}
		current = current->next;
	}
}
