#include "list.h"

int main() { 
	//creating a list
	List *list1 = createList();
	printf("First list created!\n");
	//adding elements to the list
	for ( int i = 10; i < 110; i+=10 ) {
		addNode ( list1, i );
	}
	//forward printing the list
	printf("Forward Print: \n");
	forwardPrint( list1 );
	printf("\n");

	//backward printing the list
	printf("Backward Print: \n");
	backwardPrint( list1 );
	printf("\n");

	//printing size of the list
	int size = countNode ( list1 );
	printf("Size of List: %d\n\n", size );

	//reversing the list and then printing
	printf("Reversing List: \n");
	reverseList ( list1 );
	forwardPrint ( list1 );
	printf("\n");
	
	return 0;
}
