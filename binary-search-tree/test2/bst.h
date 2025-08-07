#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *right;
    struct node *left;
}Node;

Node* createBst ( void );
void addNode ( Node*, int );
void printBst ( Node* );
void deleteNode ( Node*, int );
void searchNode ( Node*, int );
void balanceBst ( Node* );
void freeBst ( Node* );
