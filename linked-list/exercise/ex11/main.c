#include "list.h"

int main () {
	List* list1 = createList();
	List* odd = createList();
	List* even = createList();

	for ( int i = 1; i < 11; i ++ ) {
		addNode ( list1, i );
	}
	printf("Original List: ");
	printList ( list1 );
	printf("\n");

	int array[] = convert ( list1 );
	printf( "%s\n", array );

	return 0;
}
