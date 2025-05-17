#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
// i is to specify the amount of numbers in each row
    for(i = 1; i <= rows; i++) {
// j is to increment spaces so that a pyramid strucutre is formed
        for(j = 1; j <= rows - i; j++) {
            printf("  ");
        }
// this for loop below enters each number in the current row till the max num
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
// this for loop below enters each number after the max num in descending order
        for(j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
