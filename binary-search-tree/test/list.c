#include "list.h"

Node* addNode ( Node *root, int x ) {
    Node *newNode = malloc ( sizeof ( Node ) );
    newNode->data = x;
    newNode->right = NULL;
    newNode->left = NULL;
    Node *current = root;

    if ( NULL == root ) {
        root = newNode;
        return root;
    }

    while ( NULL != current ) {
        if ( x < current->data ) {
            if ( current->left == NULL ) {
                current->left = newNode;
                return root;
            } else { 
                current = current->left;
            }
        } else {
            if ( current->right == NULL ) {
                current->right = newNode;
                return root;
            } else {
                current = current->right;
            }
        }
    }
}

void preorderTraversal ( Node *current ) {

    if ( current == NULL ) {
        return;
    }

    printf ( "%d\t", current->data );
    preorderTraversal ( current->left ); 
    preorderTraversal ( current->right ); 
}

/*
void deleteNode ( Node*, int );
Node* searchNode ( Node*, int );
void freeTree ( Node* );
 */
