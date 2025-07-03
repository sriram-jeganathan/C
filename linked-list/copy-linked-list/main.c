#include "list.h"

int main() {
	// Creating a list
	List *original = createList();
	for ( int i = 0; i <= 50; i += 10 ) {
		addNode ( original, i );
	}
	printf("The original list is:\t");
	printList ( original );

	// Copying the list
	List *copy = copyList( original );
	printf("The copied list is:\t");
	printList ( copy );


	return 0;
}
