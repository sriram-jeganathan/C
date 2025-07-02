#include "list.h"
#include "queue.h"

void enqueue ( Queue *queue, int x ) {
	add_node( queue, x );	
}

int is_empty ( Queue *queue ) {
	return ( queue->front == NULL ); 
}

int dequeue( Queue *queue ) {
	Node *current = queue->front;
	int temp;

	if ( is_empty(queue) ) {
		return -1;
	}

	//Check is there is only 1 element in the queue
	if ( current->next == NULL ) {
		temp = current->number;
		queue->front = NULL;
		queue->rear = NULL;
		free(current);
	} else {
		temp = current->number;
		queue->front = current->next;
		free(current);
	}
	return temp;
}
