#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
	struct node *previous;
}Node;

typedef struct List{
	Node *head;
	Node *tail;
}List;

void addNode ( List*, int );
List* createList ( void );
void printList ( List* );
