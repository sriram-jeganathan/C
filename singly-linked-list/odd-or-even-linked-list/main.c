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

	odd_or_even ( list1, odd, even );
	printf("Even:\t");
	printList ( even );
	printf("\n");

	printf("Odd:\t");
	printList ( odd );
	printf("\n");
	return 0;
}
