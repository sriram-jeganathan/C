#include "list.h"

List* add_node( List* list, int x ) {
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

List* create_list( void ) {
	int length = 0;
	printf("Enter length of list: ");
	scanf("%d", &length );

	List *list = malloc ( sizeof ( List ) );
	list->head = NULL;
	list->tail = NULL;

	for ( int i = 1; i <= length; i++ ) {
		int number = 0;
		printf("Enter Number: ");
		scanf("%d", &number );
		add_node( list, number );
	}
	return list;
}

void print_list( List* list ) {
	Node *current = list->head;
	while ( NULL != current ) {
		printf("%d\t", current->number);
		current = current->next;
	}
}

int delete_from_first( List *list ) {
	Node *current = list->head;
	int temp;

	if ( current->next == NULL ) {
		temp = current->number;
		list->head = NULL;
		list->tail = NULL;
		free(current);
	} else {
		temp = current->number;
		list->head = current->next;
		free(current);
	}
	return temp;
}


