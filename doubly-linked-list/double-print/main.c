#include "list.h"

int main ( void ) {
    List *list = createList ( );

    for ( int i = 10; i < 100; i+=10 ) {
        addNode ( list, i );
    }

    printf ( "Your List: " );
    printList ( list );

    printf ( "Using different Print: ");
    doublePrint ( list );
    freeList ( list );
    return 0;
}
