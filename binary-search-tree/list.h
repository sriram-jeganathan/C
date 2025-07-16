#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}Node;

Node* createRoot ( void );
Node* addNode ( Node*, int );
void printTree ( Node* );
void freeTree ( Node* );
Node* deleteNode( Node*, int );
