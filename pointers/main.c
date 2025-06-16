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

    printf("Enter rollNo: ");
    scanf("%d", &rec1.rollno);
    getchar();  // Consume leftover newline

    printf("Enter name: ");
    scanf(" %[^\n]s", rec1.name);

    printf("Enter school: ");
    scanf(" %[^\n]s", rec1.school);

    printf("Enter grade: ");
    scanf(" %[^\n]s", rec1.grade);

    printf("\nStudent Record:\n");
    printf("Roll No: %d\n", rec1.rollno);
    printf("Name: %s\n", rec1.name);
    printf("School: %s\n", rec1.school);
    printf("Grade: %s\n", rec1.grade);

    return 0;
}
