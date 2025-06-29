#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int number;
	struct node *next;
}Node;

typedef struct list{
	Node *head;
	Node *tail_previous;
	Node *tail;
}List;

List* add_node( List*, int );
List* create_list();
void print_list( List* );
int pop( List* );
void push( List*, int );
