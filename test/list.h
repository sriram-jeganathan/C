#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int number;
	struct node *next;
}Node;

void add_node( int );
Node* create_list( void );
void print_list( void );
