#include <stdio.h>
#include <math.h>

int main() {
// Declaring Variables
	double pv,i,x,y,num,den,result;
	int n;
	char choice;

// HEADER
	printf("\e[1mEMI CALCULATOR\e[0m\n");

// Getting input
	printf("Enter Loan Amount: ");
	scanf("%lf", &pv);

	
	printf("Is the loan duration in years or months; ");
	scanf(" %c", &choice);

	if (choice == 'y') {
		printf("Enter Loan Duration: ");
		scanf("%d", &n);
		n=n*12;
	}
	if (choice == 'm') {
		printf("Enter Loan Duration: ");
		scanf("%d", &n);
	}

	printf("Enter interest rate (p.a): ");
	scanf("%lf", &i);
	i=i/1200;

// Calculation

// x = (1+i) and y = x ^ n
	x=i+1;
	y=pow(x,(double) n);

// Calculating the numerator and denominator
	num= pv * y * i;
	den= y - 1;

// Calculating the result
	result= num/den;
	printf("The EMI for a loan of %lf with a interest of %lf and a duration of %d is %lf\n",pv,i,n,result); 
	
	return 0;
}
