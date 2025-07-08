#include "list.h"

int main() {
	List *list1 = createList();
	for ( int i = 10; i < 110; i+=10 ) {
		addNode ( list1, i );
	}
	forwardPrint ( list1 );
	backwardPrint ( list1 );
	
//	insertAfter ( list1, 15, 10 ); 
//	forwardPrint ( list1 );

//	insertBefore ( list1, 13, 15 );
//	forwardPrint ( list1 );
	
	insertHead ( list1, 5 );
	forwardPrint( list1 );

	insertTail ( list1, 105 );
	forwardPrint( list1 );

	deleteHead ( list1 );
	forwardPrint( list1 );

	deleteTail ( list1 );
	forwardPrint( list1 );

	deleteMiddle ( list1 );
	forwardPrint( list1 );
	return 0;
}
