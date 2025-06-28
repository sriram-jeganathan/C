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

List* merge_list( List* list1, List* list2 ) {
	List *merged= malloc( sizeof ( List ) );
	Node *n1 = list1->head; 
	Node *n2 = list2->head; 
	while ( n1 != NULL ) {
		add_node(merged,n1->number);
		n1 = n1->next;
	}
	while ( n2 != NULL ) {
		add_node(merged,n2->number);
		n2 = n2->next;
	}
	return merged;
}

void sort_list( List* list ) {
	Node *outer = list->head;
	Node *inner = list->head;
	Node *temp = malloc( sizeof(Node) );
	
	while ( NULL != outer ) {
		inner = list->head;
		while ( NULL != inner ) {
			if ( inner->number > outer->number ) {
				temp->number = inner->number;
				inner->number = outer->number;
				outer->number = temp->number;
			}
			inner = inner->next;
		}
		outer = outer->next;
	}
}


