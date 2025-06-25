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
	
	
	//First Digit
	y = x;
	y = x % 10;
	add_node( list, y );

	//Second Digit
	y = x;
	y = x / 10;
	y = y % 10;
	add_node( list, y );

	//Third Digit
	y = x;
	y = x / 100;
	y = y % 10;
	add_node( list, y );

	//Fourth Digit
	y = x;
	y = x / 1000;
	add_node( list, y );
	return list;
}


void reverse_print( List *list ) {
	print_reverse( list->head, NULL );
}

void print_reverse( Node *current, Node *previous ) {
	if ( NULL == current ) {
		return;
	}

	print_reverse( current->next, current );
	printf("%d  ", current->number);

}

List* add_list( List *list1, List *list2 ) {
	List *addition = malloc(sizeof(List));
	Node *n1 = list1->head; 
	Node *n2 = list2->head; 
	while ( n1 != NULL ) {
		add_node(addition,n1->number);
		add_node(addition,n2->number);
		n2 = n2->next;
		n1 = n1->next;
	}
	return addition;
}
