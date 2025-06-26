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

	for ( int i = 1; i <= length; i++ ) {
		int number = 0;
		printf("Enter Number: ");
		scanf("%d", &number );
		add_node( list, number );
	}
	printf("List is Created!\n");
	return list;
}

void print_list( List* list ) {
	Node *current = list->head;
	while ( NULL != current ) {
		printf("%d\t", current->number);
		current = current->next;
	}
	printf("\nList Printed!\n");
}

List* merge_list( List* list1, List* list2 ) {
	List *merged= malloc( sizeof ( List ) );
	Node *n1 = list1->head; 
	Node *n2 = list2->head; 
	while ( n1 != NULL ) {
		add_node(merged,n1->number);
		n1 = n1->next;
	}
	while ( n2 != NULL ) {
		add_node(merged,n2->number);
		n2 = n2->next;
	}
	return merged;
}

int count_nodes( List* list ) {
	Node* n1 = list->head;
	int count = 0;
	while ( NULL != n1 ){
		count++;
		n1 = n1->next;
	}
	return count;
}
void sort_list( List* list ) {
	int n = count_nodes( list ) - 1;
	int* arr = (int*)malloc(n * sizeof(int));
	Node *temp = list->head;

	for ( int i = 0; i < n; i++ ) {
		arr[i] = temp->number;
		temp = temp->next;
	}
	
	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < n - i; j++ ) {
			if ( arr[j] > arr[j+1] ) {
				int t = arr[j];
				arr[j] = arr[j+i];
				arr[j+i] = t;
			}
		}
	}
	int i = 0;
	temp = list->head;
	while ( NULL != temp ) {
		temp->number = arr[i];
		temp = temp->next;
		i++;
	}
}

