#include <stdio.h>

int main () {
	/*
	 * Left Shift
	 * x << a = x * 2^a
	 * if a = 1, we just multiply the x by 2 which gives us the value of the left shift of x by a
	 */

	int x,leftShift;
	printf("Enter your Number: ");
	scanf("%d", &x);
	

	printf("LEFT SHIFT\n");
	leftShift=x<<1;
	printf("%d << 1 gives %d\n", x,leftShift); 
	leftShift=x<<2;
	printf("%d << 2 gives %d\n", x,leftShift); 
	leftShift=x<<3;
	printf("%d << 3 gives %d\n", x,leftShift); 
	printf("and so on . . .\n");

	/*
	 * Right Shift
	 * x >> a
	 * for eg; if x=9 and a=1. We convert 9 into a binary number and remove 1 digit from the right.
	 * 9 in binary is 1001. if we remove 1 digit, it becomes 100. 100 in decimal system is 4
	 * x >> a = x / 2^a
	 */

	
	double rightShift;
	printf("RIGHT SHIFT\n");
	rightShift=x>>1;
	printf("%d >> 1 gives %.0f\n", x,rightShift); 

	return 0;
}
