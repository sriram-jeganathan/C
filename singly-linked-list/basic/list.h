#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int number;
	struct node *next;
}Node;

typedef struct list {
	Node *head;
	Node *tail;
}List;

List* createList( void );
void addNode( int );
void forwardPrint( List* );
void reverse_print( Node*, Node* );
void backwardPrint( void );
void reverseList( List* );
void reverse( Node*, Node* );
void deleteList( List* );
