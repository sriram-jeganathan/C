#include "list.h"

void push(List* list, int x) {
    add_node(list, x);
}

int pop(List* list) {
    // Check if the stack is empty, if yes prints undeflow
    if (list->head == NULL) {
        printf("UNDERFLOW!\n");
        return -1; 
    }

    // Get the node on the top
    Node* current = list->tail;
    int val = current->number;

    // If only one node exists, make the list as null
    if (list->tail_previous == NULL) {
        list->head = NULL;
        list->tail = NULL;
    } else {
        // Move tail to the previous node
        list->tail = list->tail_previous;
        list->tail->next = NULL;
    }

    // Update tail_previous for the new tail
    if (list->tail == NULL) {
        list->tail_previous = NULL;
    } else {
        Node* temp = list->head;
        // If head equals tail, only one node remains
        if (temp == list->tail) {
            list->tail_previous = NULL;
        } else {
            // Find the new second-to-last node
            while (temp->next != list->tail) {
                temp = temp->next;
            }
            list->tail_previous = temp;
        }
    }

    free(current);
    return val;
}
