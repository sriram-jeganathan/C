#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}Node;

typedef struct list{
	Node *head;
	Node *tail;
	int count;
}List;

void addNode ( List*, int );
List* createList ( );
void printList ( List* );
int* convert ( List* );
