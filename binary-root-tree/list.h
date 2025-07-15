#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}Node;

typedef struct tree{
    Node *root;
    Node *leaf;
}Tree;

Tree* createRoot ( void );
void addNode ( Tree*, int );
void printTree ( Tree* );
