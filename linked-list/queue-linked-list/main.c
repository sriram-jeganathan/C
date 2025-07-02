#include "queue.h"

int main() {
	Queue* queue = create_queue();
	for ( int i = 10; i < 110; i += 10 ) {
		enqueue( queue, i );
	}
	int rear = dequeue ( queue );
	printf("%d removed\n", rear);
	return 0;
}
