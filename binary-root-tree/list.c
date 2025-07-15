#include "list.h"

Tree* createTree ( void ) {
    Tree* tree = malloc ( sizeof ( Tree ) );
    tree->root = NULL;
    tree->leaf = NULL;
}

void addNode ( Tree *tree, int x ) {
    Node *newNode = malloc ( sizeof ( Node ) );
    newNode->data = x;
    newNode->left = NULL;
    newNode->right = NULL;
    
    // if the tree is empty
    if ( NULL == tree->root ) {
        tree->root = newNode;
        tree->leaf = newNode;
        return;
    }

    // if the newNode is greater that the last node
    if ( tree->leaf->data < newNode->data ) {
        tree->leaf->right = newNode;
        newNode->left = tree->leaf;
        tree->leaf = newNode;
        tree->leaf->right = NULL;
        return;
    // if the newNode is lower than the last node
    } else {
        Node *temp = tree->leaf->left;
        temp->right = newNode;
        newNode->left = temp;
        newNode->right = tree->leaf;
        tree->leaf->left = newNode;
        return;
    }
}

void printTree ( Tree *tree ) {
    Node *current = tree->root;
    while ( NULL != current ) {
        printf ( "%d\t", current->data );
        current = current->right;
    }
    printf("\n");
}

void freeTree ( Tree* tree ) {
    Node* current = tree->root;
    while (current != NULL) {
        Node* next = current->right;
        free(current);
        current = next;
    }
    free(tree);
}
