#include "list.h"

Node* createRoot ( void ) {
    Node* root = malloc ( sizeof ( Node ) );
    root->data = 0;
    root->left = NULL;
    root->right = NULL;
    return root;
}

Node* addNode ( Node *root, int x ) {
    if ( NULL == root ) {
        Node *newNode = malloc ( sizeof ( Node ) );
        newNode->data = x;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }

    if ( x < root->data ) {
        root->left = addNode ( root->left, x );
    } else {
        root->right = addNode ( root->right, x );
    }
    return root;
}

void printTree ( Node *root ) {
    if (root == NULL)
        return;

    printTree(root->left);
    printf("%d\t", root->data);
    printTree(root->right);
}

void freeTree(Node* root) {
    if ( root == NULL ) { 
        return;
    }

    freeTree(root->left);  
    freeTree(root->right);  
    free(root);             
}
