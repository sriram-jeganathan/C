#include <stdio.h>
#include <limits.h>

int main() {

//declare 3 variables
    long x,y,result;
    x = 0;
    y = 0;

    printf("Enter any integer :");
    scanf("%ld", &x );

    printf("Enter any integer :");
    scanf("%ld", &y );

//Addition    
    result = x + y;
    printf("the sum of %ld and %ld is %ld \n", x,y,result);

//Subtraction
    result = x - y;
    printf("the difference of %ld and %ld is %ld \n", x,y,result);

//Multiplication
    result = x * y;
    printf("the product of %ld and %ld is %ld \n" ,x,y,result);

//Division
    result = x / y;
    printf("the division of %ld and %ld is %ld \n", x,y,result);

    return 0;
}
