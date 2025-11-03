#include <stdio.h>

struct Employee {
    char name[25];
    int age;
    float basic;
    float total;
};

int main() {
    struct Employee e[5], temp;
    int i, j;
    float da, hra;
    for (i = 0; i < 5; i++) {
        printf("\nEnter details of Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Age: ");
        scanf("%d", &e[i].age);
        printf("Basic Salary: ");
        scanf("%f", &e[i].basic);

        da = 0.10 * e[i].basic;  // 10% of Basic
        hra = 0.05 * e[i].basic; // 5% of Basic
        e[i].total = e[i].basic + da + hra;
    }

    
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (e[i].total < e[j].total) {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }

    
    printf("\n--- Employee Details (By Salary) ---\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s | Age: %d | Total Salary: %.2f\n", e[i].name, e[i].age, e[i].total);
    }

    return 0;
}