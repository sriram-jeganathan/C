#include "list.h"

int main() {
	List *list1 = create_list();	
	printf("First List: ");
	print_list(list1);
	printf("\n");

	List *list2 = create_list();	
	printf("Second List: ");
	print_list(list2);
	printf("\n");
	
	int x = count_nodes(list1);
	printf("Number of elements in list1: %d", x);
	printf("\n");

	int y = count_nodes(list2);
	printf("Number of elements in list2: %d", y);
	printf("\n");
	return 0;
}
