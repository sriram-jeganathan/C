#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int number;
	struct node *next;
}Node;

void add_node( int );
void print_list( void );
void reverse_print( Node*, Node* );
void print_list_in_reverse( void );
void reverse_list();
void reverse(Node*, Node*);
void delete_list();
