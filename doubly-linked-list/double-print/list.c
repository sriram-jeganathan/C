#include "list.h"

List* createList ( void ) {
    List* list = malloc ( sizeof ( List ) );
    list->head = NULL;
    list->tail = NULL;
    return list;
}

void addNode ( List *list, int x ) {
    Node *newNode = malloc ( sizeof ( Node ) );
    newNode->data = x;
    newNode->next = NULL;
    newNode->previous = NULL;
    
    if ( NULL == list->head ) {
        list->head = newNode;
        list->tail = newNode;
        return;
    }

    list->tail->next = newNode;
    newNode->previous = list->tail;
    list->tail = newNode;
    return;
}

void printList ( List *list ) {
    Node *current = list->head;

    while ( NULL != current ) {
        printf ( "%d\t", current->data );
        current = current->next;
    }
    printf ("NULL\n");
}

int countNode ( List *list ) {
    Node * current = list->head;
    int count = 0;
    while ( NULL != current ) {
        count++;
        current = current->next;
    }
    return count;
}

void doublePrint ( List *list ) {
    Node *front = list->head;
    Node *back = list->tail;
    int count = countNode ( list );
    for ( int i = 1; i <= count; i++ ) {

        if ( front == back ) {
            return;
        }

        printf ( "%d\t", back->data );
        printf ( "%d\t", front->data );

        back = back->previous;
        front = front->next;
    }
    printf("NULL\n");
}

void freeList ( List* list ) {
    Node* current = list->head;
    while (current != NULL) {
        Node* next = current->next;
        free(current);
        current = next;
    }
    free(list);
}
