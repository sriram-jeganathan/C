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

List* createList ( void );
void addNode ( List*, int );
void forwardPrint ( List* );
void backwardPrint ( List* );
List reverse ( List*, Node*, Node* );
void reverseList ( List* );
void insertHead ( List*, int );
void insertTail ( List*, int );
void insertMiddle ( List*, int, int );
void deleteHead ( List* );
void deleteTail ( List* );
void deleteMiddle ( List*, int );
List* copyList ( List* );
int countList ( List* );
void searchNode ( List*, int );
