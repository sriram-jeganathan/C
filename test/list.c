#include "list.h"

Node *head = NULL;
Node *tail = NULL;

void add_node( int x ) {
	Node* newNode = malloc ( sizeof ( Node ) );
	newNode->number = x;
	newNode->next = NULL;

	if ( NULL == head ) {
		head = newNode;
		tail = newNode;
	} else {
		tail->next = newNode;
		tail = newNode;
	}
}

Node* create_list ( void ) { 
	int x, y;
	printf("Enter a 4 Digit Number: ");
	scanf("%d", &x);
	printf("Number has been accepted\n");
	y = x;

	//First Digit
	y = x;
	y = x % 10;
	add_node(y);

	//Second Digit
	y = x;
	y = x / 10;
	y = y % 10;
	add_node(y);

	//Third Digit
	y = x;
	y = x / 100;
	y = y % 10;
	add_node(y);

	//Fourth Digit
	y = x;
	y = x / 1000;
	add_node(y);

}


void print_list( void ) {
	Node* current = head;
	while ( NULL != current ) {
		printf("%d -> ", current->number);
		current = current->next;
	}
	printf("NULL\n");
}
