#include "list.h"

int main() { 
	//creating a list
	List *list1 = createList();
	printf("First list created!\n");
	//adding elements to the list
	for ( int i = 10; i < 60; i+=10 ) {
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
	reverseList ( list1 );
	printf("\n");

	//Inserting head in the list
	printf("Inserting Head: \n");
	insertHead ( list1, 5 );
	forwardPrint ( list1 );
	printf("\n");

	//Inserting node in between head and tail
	printf("Inserting node in between head and tail: \n");
	insertNode ( list1, 2, 15 );
	forwardPrint ( list1 );
	printf("\n");

	//Inserting tail in the list
	printf("Inserting Tail: \n");
	insertTail ( list1, 105 );
	forwardPrint ( list1 );
	printf("\n");

	//Deleting the head
	printf("Deleting Head: \n");
	deleteHead ( list1 );
	forwardPrint ( list1 );
	printf("\n");
	
	//Deleting the Node in the middle except head and tail
	printf("Deleting Node: \n");
	deleteNode ( list1, 15 );
	forwardPrint ( list1 );
	printf("\n");

	//Deleting the tail 
	printf("Deleting Tail: \n");
	deleteTail ( list1 );
	forwardPrint ( list1 );
	printf("\n");

	//Search Node
	printf("Searching Node: \n");
	searchNode ( list1, 50 );
	searchNode ( list1, 55 );
	printf("\n");



	//Creating a new list and merging both
	printf("Lists Merged! \n");
	List* list2 = createList();
	for ( int i = 5; i < 60; i+=10 ) {
		addNode ( list1, i );
	}
	List *merged = mergeList ( list1, list2 );
	forwardPrint ( merged );
	printf("\n");

	//Sorting the merged list
	printf("Sorted the merged list! \n");
	sortList ( merged );
	forwardPrint ( merged );

	freeList(list1);
	freeList(list2);
	freeList(merged);
	return 0;
}
