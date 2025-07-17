#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
    struct node *previous;
}Node;

typedef struct list{
    Node *head;
    Node *tail;
}List;

List* createList ( void );
void addNode ( List*, int );
void printList ( List* );
void doublePrint ( List* );
void freeList ( List* );
