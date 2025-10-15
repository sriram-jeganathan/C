#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}Node;

typedef struct list{
    Node *head;
    Node *tail;
}List;

Node* createRoot ( void );
Node* addNode ( Node*, int );
void inorderprintTree ( Node* );
void preorderprintTree ( Node* );
void postorderprintTree ( Node* );
Node* deleteNode ( Node*, int );
Node* searchBST ( Node*, int );
Node* insertNode ( Node*, int );
List* convertBst ( Bst );
void freeTree ( Node* );
