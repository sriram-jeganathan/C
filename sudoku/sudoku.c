#include <stdio.h>
#include <stdlib.h>

int main() {
    int numbers[10];
    int i;

    // Generate and store 10 random numbers between 1 and 100
    for (i = 0; i < 10; i++) {
        numbers[i] = (rand() % 100) + 1;  // DOUBT
    }

    printf("The 10 numbers in the array are:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}

