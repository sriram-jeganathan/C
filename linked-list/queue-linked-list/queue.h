#include "list.h"

typedef struct queue {
	Node *front;
	Node *rear;
}Queue;

Queue* create_queue( );
void enqueue ( Queue*, int );
int dequeue ( Queue* );
int is_empty( Queue* );
