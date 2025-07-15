#include "list.h"

int main ( void ) {
    Tree* tree = malloc ( sizeof ( Tree ) );
    addNode ( tree, 10 );
    addNode ( tree, 15 );
    addNode ( tree, 13 );
    addNode ( tree, 20 );
    addNode ( tree, 27 );
    addNode ( tree, 25 );
    addNode ( tree, 40 );
    printTree ( tree );
}
