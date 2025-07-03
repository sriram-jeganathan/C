#include "list.h"

int main() {
	List *list1 = create_list();	
	printf("First List: ");
	print_list(list1);
	printf("\n");

	delete_middle_node( list1 );
	print_list( list1 );
	return 0;
}
