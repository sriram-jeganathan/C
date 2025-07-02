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

	int x, y;
	printf("Enter a 4 Digit Number: ");
	scanf("%d", &x);
	y = x;
	
	for ( int i = 1; i <= x; i++ ) {
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
		current = curren->next;
	}
	return count;
}

void delele_node( List *list ) {
	
}
