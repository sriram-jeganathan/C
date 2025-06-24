#include "list.h"

int main() {
	List *list1 = create_list();	
	printf("First List: ");
	print_list( list1 );
	printf("\n");

	List *list2 = create_list();	
	printf("Second List: ");
	print_list( list2 );
	printf("\n");

	List *result = add_number( list1, list2);
	printf("Sum: ");
	print_list( result );
	printf("\n");

	List *result2 = subtract_number( list1, list2);
	printf("Diff: ");
	print_list( result2 );
	printf("\n");

	return 0;

}
