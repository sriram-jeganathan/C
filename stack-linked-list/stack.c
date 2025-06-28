#include "list.h"


void push ( List* list, int x ) {
	add_node( list, x );
}

int pop ( List* list ) {
	Node *current = list->head;
	if ( NULL == list->head ) {
		printf("UNDERFLOW!\n");
		return 0;
	}
	free(list->tail);
	list->tail = list->tail_previous;
	list->tail->next = NULL;
}
