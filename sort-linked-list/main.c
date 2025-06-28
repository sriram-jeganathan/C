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

	printf("\nMerged and Sorted List: \n");
	List *merged = merge_list( list1, list2 );
	sort_list( merged );
	print_list( merged );
	printf("\n");
	return 0;
}
