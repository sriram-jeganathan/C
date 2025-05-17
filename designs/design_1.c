#include <stdio.h>

//This Program is to print out 5 lines of a particular sequence
//
int main() {
    int i, j;

// i defines the total number of lines to be printed
// while j is used for limitting the amount of numbers to be printed in each line

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
