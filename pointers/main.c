#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int rollno;
    char name[50];
    char school[50];
    char grade[10];
};

int main() {
    struct student rec1;
    struct student *ptr = &rec1;

    printf("Enter rollNo: ");
    scanf("%d", &rec1.rollno);
    getchar();  

    printf("Enter name: ");
    scanf(" %[^\n]s", (*ptr).name);

    printf("Enter school: ");
    scanf(" %[^\n]s", (*ptr).school);

    printf("Enter grade: ");
    scanf(" %[^\n]s", (*ptr).grade);

    printf("\nStudent Record:\n");
    printf("Roll No: %d\n", (*ptr).rollno);
    printf("Name: %s\n", (*ptr).name);
    printf("School: %s\n", (*ptr).school);
    printf("Grade: %s\n", (*ptr).grade);

    return 0;
}
