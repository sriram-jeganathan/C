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
Node* deleteNode ( Node*, int );
Node* searchNode ( Node*, int );
Node* insertNode ( Node*, int );
void freeTree ( Node* );
