#include "list.h"

List* add_node( List* list, int x ) {
	Node* newNode = malloc ( sizeof ( Node ) );
	newNode->number = x;
	newNode->next = NULL;

	if ( NULL == list->head ) {
		list->head = newNode;
		list->tail = newNode;
	} else {
		list->tail->next = newNode;
		list->tail = newNode;
	}
}

List* create_list( void ) {
	int length = 0;
	printf("Enter length of list: ");
	scanf("%d", &length );

	List *list = malloc ( sizeof ( List ) );
	list->head = NULL;
	list->tail = NULL;
	list->size = length;
	int number;
	for ( int i = 1; i <= length; i++ ) {
		printf("Enter Number: ");
		scanf("%d", &number );
		add_node( list, number );
	}
	return list;
}

void print_list( List* list ) {
	Node *current = list->head;
	while ( NULL != current ) {
		printf("%d\t", current->number);
		current = current->next;
	}
}

void palindrome(List *list) {
    	if (list == NULL || list->head == NULL) {
        	printf("List is empty.\n");
        	return;
    	}

    	int size = list->size;
    	int *arr = malloc(sizeof(int) * size);

    	Node *current = list->head;
    	for (int i = 0; i < size; i++) {
        	arr[i] = current->number;
        	current = current->next;
    	}

    	// Check if palindrome
    	int isPalindrome = 1;
    	for (int i = 0, j = size - 1; i < j; i++, j--) {
    	    	if (arr[i] != arr[j]) {
        	    isPalindrome = 0;
        	    break;
        	}
    	}

    	if (isPalindrome)
        	printf("The list is a palindrome.\n");
    	else
        	printf("The list is not a palindrome.\n");

    	free(arr);
}

