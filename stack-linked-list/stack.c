#include "list.h"

void push(List* list, int x) {
	add_node(list, x);
}

int pop(List* list) {
	if (list->head == NULL) {
		printf("UNDERFLOW!\n");
		return -1;
	}

	Node *current = list->head;
	Node *prev = NULL;

	while (current->next != NULL) {
		prev = current;
		current = current->next;
	}

	int val = current->number;

	if (prev == NULL) {
		// Only one node in stack
		free(current);
		list->head = NULL;
		list->tail = NULL;
	} else {
		free(current);
		prev->next = NULL;
		list->tail = prev;
	}

	return val;
}

