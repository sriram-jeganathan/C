#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student{
	int rollno;
	char name[50];
	char school[50];
	char grade[10];
};




int main() {
	struct student rec1;

	printf("Enter rollNo: ");
	scanf("%d", &rec1.rollno);

	printf("Enter name: ");
	scanf("%c", &rec1.name);

	printf("Enter school: ");
	scanf("%c", &rec1.school);

	printf("Enter grade: ");
	scanf("%c", &rec1.grade);

	printf("rollno: %d\nname: %s\nschool: %s\ngrade: %s\n", rec1.rollno, rec1.name, rec1.school, rec1.grade);

	return 0;
}
