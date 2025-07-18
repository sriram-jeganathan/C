#include "list.h"

int main ( void ) {
    Node *tree = addNode ( NULL, 50 );
    addNode ( tree, 20 );
    addNode ( tree, 40 );
    addNode ( tree, 30 );
    addNode ( tree, 70 );
    addNode ( tree, 90 );
    addNode ( tree, 80 );

    preorderTraversal ( tree );

    return 0;
}
