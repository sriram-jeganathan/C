#include "bst.h"

Node* createRoot ( void ) {
    Node* root = malloc ( sizeof ( Node ) );
    root->left = NULL;
    root->right = NULL;
    return root;
}

void addNode ( Node *root, int x ) {
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
    return;
}

void inorderprintTree ( Node *root ) {
    if (root == NULL)
        return;

    inorderprintTree(root->left);
    printf("%d\t", root->data);
    inorderprintTree(root->right);
}

void preorderprintTree ( Node *root ) {
    if (root == NULL)
        return;

    printf("%d\t", root->data);
    inorderprintTree(root->left);
    inorderprintTree(root->right);
}

void postorderprintTree ( Node *root ) {
    if (root == NULL)
        return;

    inorderprintTree(root->left);
    inorderprintTree(root->right);
    printf("%d\t", root->data);
}

void deleteNode ( Node *root, int x ) {
    Node *current = root;

    while ( NULL != current ) {
        if ( x < current->data ) {
            current = current->left;
        } else {
            current = current->right;
        }

        if ( current->data == x ) {
//continue here . . .
        }
    }
}

void freeTree(Node* root) {
    if ( root == NULL ) { 
        return;
    }

    freeTree(root->left);  
    freeree(root->right);  
    free(root);             
}

/*
Node* searchBST ( Node*, int );
Node* insertNode ( Node*, int );
void freeTree ( Node* );
*/
