#include <stdio.h>
#include <string.h>

struct student {
    char name[30];
    int roll_number;
    int grade;
    char section[1];
    int just;
}stud;

void main() {

    printf("Enter the infomation of a student!\n");

    // Name
    printf("Enter a name: ");
    fgets(stud.name, 30, stdin);
    strtok(stud.name, "\n");
    // Roll number
    printf("Enter Roll number of %s: ", stud.name);
    scanf("%d", &stud.roll_number);
    // Grade
    printf("Enter grade of %s: ", stud.name);
    scanf("%d", &stud.grade);
    // Section
    printf("Enter section of %s: ", stud.name);
    fgets(stud.section, 1, stdin);
    strtok(stud.section, "\n");
}