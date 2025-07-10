#include "list.h"

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
}

List* createList ( void ) {
	List *list = malloc ( sizeof ( List ) );
	list->head = NULL;
	list->tail = NULL;
	return list;
}

void forwardPrint ( List *list ) {
	Node *current = list->head;
	while ( NULL != current ) {
		printf("%d\t", current->data );
		current = current->next;
	}
	printf("NULL\n");
}

void backwardPrint ( List *list ) {
	Node *current = list->tail;
	while ( NULL != current ) {
		printf("%d\t", current->data );
		current = current->previous;
	}
	printf("NULL\n");
}

int countNode ( List *list ) {
	Node *current = list->head;
	int count = 0;
	while ( NULL != current ) {
		count++;
		current = current->next;
	}
	return count;
}

Node* reverse ( Node *current ) {
	if ( current == NULL ) {
		return NULL;
	}
	Node* temp = current->next;
	current->next = current->previous;
	current->previous = temp;

	if ( current->previous == NULL ) {
		return current;
	}

	return reverse ( current->previous );
}

void reverseList ( List *list ) {
	if ( list == NULL || list->head == NULL ) {
		return;
	}

	Node *newHead = reverse ( list->head );

	Node *temp = list->head;
	list->head = list->tail;
	list->tail = temp;
}

void insertHead ( List *list, int x ) {
	Node *newNode = malloc ( sizeof ( Node ) );
	newNode->data = x;
	newNode->next = NULL;
	newNode->previous = NULL;

	newNode->next = list->head;
	list->head->previous = newNode;
	list->head = newNode;
}

void insertNode ( List *list, int position, int x ) {
	Node *current = list->head;
	for ( int pos = 0; pos < position; pos++ ) {
		current = current->next;
	}
	Node *newNode = malloc ( sizeof ( Node ) );
	newNode->data = x;
	newNode->next = NULL;
	newNode->previous = NULL;

	Node *temp = current->previous;
	newNode->previous = current->previous;
	newNode->next = current;
	temp->next = newNode;
	current = current->next;
	current->previous = newNode;
}

void insertTail ( List *list, int x ) {
	Node *newNode = malloc ( sizeof ( Node ) );
	newNode->data = x;
	newNode->next = NULL;
	newNode->previous = NULL;

	list->tail->next = newNode;
	newNode->previous = list->tail;
	list->tail = newNode;
}

void deleteHead ( List *list ) {
	Node *newHead = list->head;
	newHead = newHead->next;

	Node *temp = list->head;
	newHead->previous = NULL;
	free(list->head);
	list->head = newHead;
	
}

void deleteNode ( List *list, int x ) {
	Node *current = list->head;
	while ( NULL != current  ) {
		if ( current->data == x ) {
			break;
		}
		current = current->next;
	}
	Node *temp1 = current->previous;
	Node *temp2 = current->next;

	temp1->next = temp2;
	temp2->previous = temp1;
	free(current);
}

void deleteTail ( List *list ) {
	Node *newTail = list->tail;
	newTail = newTail->previous;
	newTail->next = NULL;
	free(list->tail);
	list->tail = newTail;
}

void searchNode ( List *list, int x ) {
	Node *current = list->head;
	while ( NULL != current ) {
		if ( current->data == x ) {
			printf("Valid Node!\n");
			return;
		}
		current = current->next;
	}
	printf("Invalid Node!\n");
}

List* mergeList ( List *list1, List *list2 ) {
	Node *current1 = list1->head;
	Node *current2 = list2->head;

	List* result = createList();

	while ( NULL != current1 ) {
		addNode ( result, current1->data );
		current1 = current1->next;
	}

	while ( NULL != current2 ) {
		addNode ( result, current2->data );
		current2 = current2->next;
	}

	return result;
}

List* copyList ( List *list ) {
	List* copy = createList();

	Node *current = list->head;

	while ( NULL != current ) {
		addNode ( copy, current->data );
		current = current->next;
	}
	return copy;
}

void sortList ( List *list ) {
	Node *outer = list->head;
	Node *inner = list->head;
	Node *temp = malloc ( sizeof ( Node ) );

	while ( NULL != outer ) {
		inner = list->head;
		while ( NULL != inner ) {
			if ( inner->data > outer->data ) {
				temp->data = inner->data;
				inner->data = outer->data;
				outer->data = temp->data;
			}
			inner = inner->next;
		}
		outer = outer->next;
	}
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
