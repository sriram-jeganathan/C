#include "list.h"

int main() {
	List *list = createList();
	for ( int i = 5; i < 55; i+=10 ) {
		addNode ( list, i );
	}
	printList ( list );
	return 0;
}
