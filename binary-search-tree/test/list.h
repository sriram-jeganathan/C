#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}Node;

Node* addNode ( Node*, int );
void preorderTraversal ( Node* );
void deleteNode ( Node*, int );
Node* searchNode ( Node*, int );
void freeTree ( Node* );
