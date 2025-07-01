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
	
	List *result = add_list( list1, list2 );
	printf( "The union of the 2 lists are: \n" );
	reverse_print( result );
	printf("\n");
	return 0;

}
