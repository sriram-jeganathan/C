#include "list.h"

void push(List* list, int x) {
    add_node(list, x);
}

int pop(List* list) {
    // checks if stack is empty or not
    if (list->head == NULL) {
        printf("UNDERFLOW!\n");
        return -1;
    }

    Node* current = list->tail;
    int val = current->number;

    if (list->tail_previous == NULL) {
        list->head = NULL;
        list->tail = NULL;
    } else {
        list->tail = list->tail_previous;
        list->tail->next = NULL;
    }

    if (list->tail == NULL) {
        list->tail_previous = NULL;
    } else {
        Node* temp = list->head;

        if (temp == list->tail) {
            list->tail_previous = NULL;
        } else {
            while (temp->next != list->tail) {
                temp = temp->next;
            }
            list->tail_previous = temp;
        }
    }

    free(current);
    return val;
}
