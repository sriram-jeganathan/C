#include "bst.h"

Node* createBst ( void ) {
    Node* root = malloc ( sizeof ( Node ) );
    root->data = 0;
    root->left = NULL;
    root->right = NULL;
    return root;
}

void addNode ( Node *root, int x ) {
    Node *newNode = malloc ( sizeof ( Node ) );
    newNode->data = x;
    newNode->left = NULL;
    newNode->right = NULL;
    Node* current = root;

    if ( root == NULL ) {
        root = newNode;
        return;
    }
    while ( current != NULL ) {
        if ( newNode->data < current->data ) {
            current = current->left;
        }
        else {
            current = current->right;
        }
    }
    
    if ( current->data > newNode->data ) {

    }

}


