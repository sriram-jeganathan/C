#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int number;
	struct node *next;
}Node;

void add_node( int );
void print_list( void );
void reverse_print( void );
void print_reverse( Node*, Node* );
void reverse_list( Node*, Node* );
void reverse( void );
long sum( void );
long recursive_sum( Node*, Node* );
void print_sum( void );
