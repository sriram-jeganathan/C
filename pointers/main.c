#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
    int rollno;
    char name[50];
    char school[50];
    char grade[10];
}Student;

int main() {
    Student rec1;
    Student *ptr = &rec1;

    printf("Enter rollNo: ");
<<<<<<< HEAD
    scanf("%d", &rec1.rollno);
    getchar();  
=======
    scanf("%d", &(*ptr).rollno);
    getchar(); 
>>>>>>> f063bc6a8ad441c356634123d20d481ab2af561f

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
    
    int *arr = malloc( 10 * sizeof(int));
    char *string = malloc( 80 * sizeof(char));
    return 0;
}
