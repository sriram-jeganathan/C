#include "list.h"

int main() {
	List *list1 = create_list();
	printf("\nFirst List: \n");
	print_list( list1 );
	printf("\n\n");

	List *list2 = create_list();
	printf("\nSecond List: \n");
	print_list( list2 );
	printf("\n\n");

	palindrome ( list1 );
	palindrome ( list2 );
	return 0;
}
