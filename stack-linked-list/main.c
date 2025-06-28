#include "list.h"

int main() {
    List* stack = create_list();

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printf("Current stack:\n");
    print_list(stack);

    printf("Popped: %d\n", pop(stack));
    printf("Stack after pop:\n");
    print_list(stack);

    printf("Popped: %d\n", pop(stack));
    printf("Popped: %d\n", pop(stack));

    while (stack->head != NULL) {
        Node* temp = stack->head;
        stack->head = stack->head->next;
        free(temp);
    }
    free(stack);

    return 0;
}
