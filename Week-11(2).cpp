#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    int n, i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n], temp;

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].rollNo);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Sorting by marks (descending)
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (s[i].marks < s[j].marks) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\n--- Student Records (Rank Wise) ---\n");
    for (i = 0; i < n; i++) {
        printf("Rank %d: %s (Roll No: %d, Marks: %.2f)\n", i + 1, s[i].name, s[i].rollNo, s[i].marks);
    }

    return 0;
}