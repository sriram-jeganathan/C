#include "list.h"

int main() {
	List *list1 = create_list();	
	printf("First List: ");
	reverse_print( list1 );
	printf("\n");

	List *list2 = create_list();	
	printf("Second List: ");
	reverse_print( list2 );
	printf("\n");
	
	return 0;

}
