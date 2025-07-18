#include "bst.h"

int main() {
    Node *tree = NULL;
    // Adding some nodes
    tree = addNode(NULL, 50);
    tree = addNode(tree, 30);
    tree = addNode(tree, 70);
    tree = addNode(tree, 20);
    tree = addNode(tree, 40);
    tree = addNode(tree, 60);
    tree = addNode(tree, 80);

    printf("inorder\n");
    inorderprintTree(tree);
    printf("\n");

    printf("preorder\n");
    preorderprintTree(tree);
    printf("\n");

    printf("postorder\n");
    postorderprintTree(tree);
    printf("\n");

    tree = deleteNode(tree, 40);
    inorderprintTree(tree);
    printf("\n");

    freeTree ( tree );

    return 0;
}

/*
 *                        50
 *                  30          70
 *              20     40   60      80
 */
