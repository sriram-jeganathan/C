#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int val;
	struct node *next;
}Node;

Node* createList();
void addNode ( Node*, int );
void addNodeBefore ( Node*, int, int );
void addNodeAfter ( Node*, int, int );
void forwardPrint ( Node* );
void backwardPrint ( Node* );
void reverseList ( Node* );
void reverse ( Node*, Node* );
void sortList ( Node* );
int countSize ( Node* );
void freeList ( Node* );
