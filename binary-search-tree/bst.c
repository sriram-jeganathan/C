#include "bst.h"

Node* createRoot ( void ) {
    Node* root = malloc ( sizeof ( Node ) );
    root->left = NULL;
    root->right = NULL;
    return root;
}

Node* addNode ( Node *root, int x ) {
    // if there are no nodes in the tree
    if ( NULL == root ) {
        Node *newNode = malloc ( sizeof ( Node ) );
        newNode->data = x;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }

    /* 
     * inserts to the left if the value is less that the parent node, inserts to the right if the value is more than
     * the parent node 
     */
    if ( x < root->data ) {
        root->left = addNode ( root->left, x );
    } else {
        root->right = addNode ( root->right, x );
    }
    return root;
}

void inorderprintTree ( Node *root ) {
    // checks if the tree is having any value
    if (root == NULL)
        return;

    // recursive calling
    inorderprintTree(root->left);
    printf("%d\t", root->data);
    inorderprintTree(root->right);
}

void preorderprintTree ( Node *root ) {
    // checks if the tree is having any value
    if (root == NULL)
        return;

    // recursive calling
    printf("%d\t", root->data);
    preorderprintTree(root->left);
    preorderprintTree(root->right);
}

void postorderprintTree ( Node *root ) {
    // checks if the tree is having any value
    if (root == NULL)
        return;

    // recursive calling
    postorderprintTree(root->left);
    postorderprintTree(root->right);
    printf("%d\t", root->data);
}

Node* deleteNode ( Node *root, int key) {
    if ( root == NULL ) {
        return NULL;
    }

    // checks if 
    if ( key < root->data ) {
        root->left = deleteNode(root->left, key);
    } else if ( key > root->data ) {
        root->right = deleteNode(root->right, key);
    } else {
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

Node* searchBST ( Node *root, int val ) {
    if (root == NULL) { 
        return NULL;
    }
    if ( root->data == val) {
        return root;
    }
    if ( val < root->data ) {
        return searchBST(root->left, val);
    } else {
        return searchBST(root->right, val);
    }
}

void freeTree(Node* root) {
    if ( root == NULL ) { 
        return;
    }

    freeTree(root->left);  
    freeTree(root->right);  
    free(root);             
}
