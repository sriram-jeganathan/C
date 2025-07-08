#include "list.h"

int main () {
	List* list1 = createList();

	for ( int i = 1; i < 11; i ++ ) {
		addNode ( list1, i );
	}
	
	printf("Original List: ");
	printList ( list1 );
	printf("\n");

	int *array = convert ( list1 );
	int size = list1->count;
	for ( int i = 0; i < size; i++ ) {
		printf("%d\t", array[i] );
	}

	return 0;
}
