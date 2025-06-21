#include "list.h"

int main() {
	extern Node *head;
	for ( int i = 50; i < 251; i+=50 ) {
		add_node( i );
	}
	//Printing list in ascending order
	print_list();
	//Printing list in descending order
	reverse_print( head, NULL );
	printf("NULL\n");
	//Reversing the list and then printing
	reverse_list();
	print_list();
	return 0;
}
