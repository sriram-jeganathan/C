#include "list.h"

int main() {
	List *list1 = create_list();	
	printf("First List: ");
	print_list(list1);
	printf("\n");

	int x = count_nodes(list1);
	printf("Number of elements in list1: %d", x);
	printf("\n");
	
	//adding element in between
	add_in_middle( list1, 456 );
	print_list ( list1 );

	return 0;
}
