#include <stdio.h>
#include "list.h"

int main() {
    Node* tree = createRoot();

    // Adding some nodes
    tree = addNode(tree, 50);
    tree = addNode(tree, 30);
    tree = addNode(tree, 70);
    tree = addNode(tree, 20);
    tree = addNode(tree, 40);
    tree = addNode(tree, 60);
    tree = addNode(tree, 80);

    printTree(tree);
    printf("\n");

    tree = deleteNode(tree, 40);
    printTree(tree);
    printf("\n");

    freeTree ( tree );

    return 0;
}
