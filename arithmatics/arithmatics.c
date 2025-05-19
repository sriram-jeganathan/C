#include <stdio.h>

double add(float x,float y) {
	return x+y;
}


double subtract(float x,float y) {
	return x-y;
}


double multiply(float x,float y) {
	return x*y;
}


double divide(float x,float y) {
	return x/y;
}

int main() {
	float x,y;
	double result;

	printf("Enter the first number: ");
	scanf("%f", &x);
	

	printf("Enter the second number: ");
	scanf("%f", &y);

//Addition	
	result=add(x,y);
	printf("Sum of %f and %f are: %.2lf\n",x,y,result);


//Subtraction
	result = subtract(x,y);
	printf("Difference of %f and %f are: %.2lf\n",x,y,result);

//Multiplication
	result = multiply(x,y);
	printf("Product of %f and %f are: %.2lf\n",x,y,result);

//Division
	result = divide(x,y);
	printf("Quotient of %f and %f are: %.2lf\n",x,y,result);

	printf("Done!!\n");
	return 0;
}
