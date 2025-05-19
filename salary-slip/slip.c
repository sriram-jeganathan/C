#include <stdio.h>

int main() {
	int emp_id,basic_salary;
	float hra,conveyance,medical_allowance,other_allowance;
	float health_insurance,tds;

	printf("Enter emp_ID: ");
	scanf("%d", &emp_id);

	printf("Enter basic salary: ");
	scanf("%d", &basic_salary);

	printf("--------------------------------------------------------------------------------\n");
	printf("\e[1mEARNINGS\e[0m\n");
	printf("--------------------------------------------------------------------------------\n");
//HRA
	hra= basic_salary * 0.2;
	printf("HRA: \t\t\t\t%.2f\n", hra);

//CONVEYANCE
	conveyance = basic_salary * 0.1;
	printf("CONVEYANCE: \t\t\t%.2f\n", conveyance);

//MEDICAL_ALLOWANCE
	medical_allowance= basic_salary*0.05;
	printf("MEDICAL ALLOWANCE: \t\t%.2f\n", medical_allowance);

//OTHER ALLOWANCE
	other_allowance= basic_salary*0.3;
	printf("OTHER ALLOWANCE: \t\t%.2f\n", other_allowance);

	printf("--------------------------------------------------------------------------------\n");
	printf("\e[1mDEDUCTIONS\e[0m\n");
	printf("--------------------------------------------------------------------------------\n");

//HEALTH_INSURANCE
	health_insurance= basic_salary*0.02;
	printf("HEALTH INSURANCE: \t\t%.2f\n", health_insurance);

//TDS
	tds= basic_salary*0.1;
	printf("TDS: \t\t\t\t%.2f\n", tds);
	printf("--------------------------------------------------------------------------------\n");

	printf("DONE!!!\n");
	return 0;
}
