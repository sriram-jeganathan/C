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

Node* deleteNode ( Node *root, int key) {
    if (root == NULL)
        return NULL;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }
        if (root->left == NULL) {
            Node *t = root->right;
            free(root);
            return t;
        }
        if (root->right == NULL) {
            Node *t = root->left;
            free(root);
            return t;
        }
        Node *cur = root->right;
        while (cur->left != NULL)
            cur = cur->left;
        root->data = cur->data;
        root->right = deleteNode(root->right, cur->data);
    }
    return root;
}
