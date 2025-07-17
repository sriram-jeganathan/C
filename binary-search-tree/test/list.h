#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}Node;

Node* createTree ( void );
Node* addNode ( Node*, int );
Node* printTree ( Node* );
