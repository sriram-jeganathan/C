#include "list.h"

int main() {
	for ( int i = 10; i <=110; i+=10 ) {
		add_node(i);
	}
	// Printing the list in left to right
	print_list();
	// Printing the list in right to left
	reverse_print();
	
	// Reversing the list and then printing
	reverse();
	print_list();

	sum();	//Iterative
	print_sum(); //recursive
	return 0;
}
