#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}Node;

typedef struct list{
	Node *head;
	Node *tail;
}List;

void addNode ( List*, int );
List* createList ( void );
void printList ( List* );

