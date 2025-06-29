#include "list.h"

List* add_node(List *list, int x) {
    Node* newNode = malloc(sizeof(Node));
    newNode->number = x;
    newNode->next = NULL;

    if (list->head == NULL) {
        list->head = newNode;
        list->tail = newNode;
        list->tail_previous = NULL;
    } else {
        list->tail->next = newNode;
        list->tail_previous = list->tail;
        list->tail = newNode;
    }
}

List* create_list(void) {
    List *list = malloc(sizeof(List));
    list->head = NULL; 
    list->tail = NULL; 
    list->tail_previous = NULL;
    return list;
}

void print_list(List *list) {
    Node *current = list->head;
    while (current != NULL) {
        printf("%d -> ", current->number);
        current = current->next;
    }
    printf("NULL\n");
}
