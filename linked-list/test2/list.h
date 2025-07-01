#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int number;
	struct node *next;
}Node;

typedef struct list{
	Node *head;
	Node *tail;
}List;

List* add_node( List*, int );
List* create_list( void );
List* add_list( List*, List* );
void reverse_print( List* );
void print_reverse( Node*, Node* );
