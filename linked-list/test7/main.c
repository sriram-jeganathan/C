#include "list.h"

int main() {
	List* list = create_list();
	for ( int i = 10; i < 110; i += 10 ) {
		add_node( list, i );
	}
	int top = delete_from_first( list );
	printf("%d removed\n", top);
	return 0;
}
