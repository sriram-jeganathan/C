#include "list.h"

int main() {
	for ( int i = 10; i < 110; i+=10) {
		add_node(i);
	}
	print_list();
	print_list_in_reverse();

	//reversing the list and printing
	reverse_list();
	print_list();

	print_list_in_reverse();
}
