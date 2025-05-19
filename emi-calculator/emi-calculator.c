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

	
	printf("Is the loan duration in years or months: ");
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
	printf("The EMI for a loan of %.2lf with a interest of %.2lf and a duration of %d is %.2lf\n",pv,i,n,result); 
	
// Print amortization table
	double balance = pv;
	double interestPaid, principalPaid;

	printf("\e[1mAMORTIZATION LOAN SCHEDULE\e[0m\n");

	printf("\n+------------+---------------+----------------+-------------------+\n");
	printf("| Payment #  | Interest Paid | Principal Paid | Remaining Balance |\n");
	printf("+------------+---------------+----------------+-------------------+\n");

	for (int month = 1; month <= n; month++) {
    		interestPaid = balance * i;
    		principalPaid = result - interestPaid;
    		balance -= principalPaid;

    	if (balance < 0.01) balance = 0;
		printf("| %-10d | %-13.2f | %-14.2f | %-17.2f |\n",month, interestPaid, principalPaid, balance);
	}

	printf("+------------+---------------+----------------+-------------------+\n");
	return 0;

}
