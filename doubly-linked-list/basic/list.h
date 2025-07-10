#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
	struct node *previous;
}Node;


typedef struct list {
	Node *head;
	Node *tail;
}List;


void addNode ( List*, int );
List* createList ( void );
void forwardPrint ( List* );
void backwardPrint ( List* );
void reverseList ( List* );
void insertHead ( List*, int );
void insertNode ( List*, int, int );
void insertTail ( List*, int );
int countNode ( List* );
void deleteHead ( List* );
void deleteTail ( List* );
void deleteNode ( List*, int );
void searchNode ( List*, int );
void sortList ( List* );
List* mergeList ( List*, List* );
List* copyList ( List* );
void freeList( List* );
