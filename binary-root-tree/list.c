#include "list.h"

Tree* createTree ( void ) {
    Tree* tree = malloc ( sizeof ( Tree ) );
    tree->left = NULL;
    tree->right = NULL;
}

void addNode ( Tree *tree, int x ) {
    Node *newNode = malloc ( sizeof ( Node ) );
    newNode->data = x;
    newNode->left = NULL;
    newNode->right = NULL;

    if ( NULL == tree->root ) {
        tree->root = newNode;
        tree->leaf = newNode;
        return tree;
    }

    if ( tree->leaf->data < newNode->data ) {
        tree->leaf->right = newNode;
        newNode->left = tree->leaf;
        tree->leaf = newNode;
        return tree;
    } else {
        Node *temp = tree->leaf->left;
        temp->right = newNode;
        newNode->left = temp;
        newNode->right = tree->leaf;
        tree->leaf->left = newNode;
        return tree;
    }
}

void printTree ( Tree *tree ) {

}
