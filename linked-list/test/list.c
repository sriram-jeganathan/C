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


void print_list( List *list ) {
	Node* current = list->head;
	while ( NULL != current ) {
		printf("%d  ", current->number);
		current = current->next;
	}
	printf("\n");
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

List* add_number( List* list1, List* list2 ) {
    	Node* n1 = list1->head;
    	Node* n2 = list2->head;
	List* result = malloc(sizeof(List));
    	result->head = NULL;

    	int carry_over = 0;
	while(( NULL != n1 ) && ( NULL != n2 )) {
        	int sum = carry_over;
        	if (n1 != NULL) {
            	sum += n1->number;
            	n1 = n1->next;
        	}
        	if (n2 != NULL) {
            	sum += n2->number;
            	n2 = n2->next;
        	}

        	carry_over = sum / 10;
        	add_node(result, sum % 10); 
    	}
	if ( 0 < carry_over ) {
		add_node(result, carry_over);
	}

    	return result;
}
List* subtract_number( List* list1, List* list2 ) {

    	Node* n1 = list1->head;
    	Node* n2 = list2->head;
	List* result = malloc(sizeof(List));
    	result->head = NULL;

    	int carry_over = 0;
	for ( int i = 0; i < 4; i++ ){
        	int diff = carry_over;
        	add_node(result, diff);  // Add digit to result
    	}
	return result;
}
