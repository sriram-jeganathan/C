#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int number;
	struct node *next;
}Node;

void add_node( int );
void print_list( void );
void reverse_print( Node*, Node* );
void reverse_list( void );
void reverse( Node*, Node* );
