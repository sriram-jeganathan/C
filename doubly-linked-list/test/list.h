#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
	struct node *previous;
}Node;

typedef struct list{
	Node *head;
	Node *tail;
}List;

void addNode ( List*, int );
List* createList ( void );
void forwardPrint ( List* );
void backwardPrint ( List* );

void insertAfter ( List*, int, int );
void insertBefore ( List*, int, int );
void insertHead ( List*, int );
void insertTail ( List*, int );
void deleteHead ( List* );
void deleteTail ( List* );
void deleteMiddle ( List* );
void Search ( List*, int );
