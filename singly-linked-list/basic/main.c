#include "list.h"

int main() {
	List *list = createList();

	for ( int i = 10; i < 110; i+=10) {
		addNode( list, i);
	}

	forwardPrint( list );
	backwardPrint( list );

	//reversing the list and printing
	reverse_list();
	print_list();

	print_list_in_reverse();
}
