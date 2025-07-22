#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *left;
    struct node *right;
}Node;

Node* createRoot ( void );
void addNode ( Node*, int );
void inorderprintTree ( Node* );
void preorderprintTree ( Node* );
void postorderprintTree ( Node* );
void deleteNode ( Node*, int );
Node* searchBST ( Node*, int );
Node* insertNode ( Node*, int );
void freeTree ( Node* );
