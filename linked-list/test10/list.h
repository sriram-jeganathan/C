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
void print_list( List* );
void delete_middle_node( List* );
int count_list( List* );
