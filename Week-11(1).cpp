#include <stdio.h>

struct Student {
    char name[50];
    char className[10];
    int rollNo;
    int enrolNo;
    float marks;
};

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Class: ");
        scanf("%s", s[i].className);
        printf("Roll No: ");
        scanf("%d", &s[i].rollNo);
        printf("Enrollment No: ");
        scanf("%d", &s[i].enrolNo);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- Student Records ---\n");
    for (i = 0; i < n; i++) {
        printf("\nName: %s", s[i].name);
        printf("\nClass: %s", s[i].className);
        printf("\nRoll No: %d", s[i].rollNo);
        printf("\nEnrollment No: %d", s[i].enrolNo);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    return 0;
}