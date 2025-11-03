 #include <stdio.h>

// Structure to store distance
struct Distance {
    int feet;
    int inch;
};

int main() {
    struct Distance d1, d2, sum;

    // Taking input
    printf("Enter first distance (feet and inches): ");
    scanf("%d %d", &d1.feet, &d1.inch);

    printf("Enter second distance (feet and inches): ");
    scanf("%d %d", &d2.feet, &d2.inch);

    // Adding feet and inches
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    // Convert inches to feet if >= 12
    if (sum.inch >= 12) {
        sum.feet = sum.feet + (sum.inch / 12);
        sum.inch = sum.inch % 12;
    }

    // Display result
    printf("\nTotal Distance = %d feet %d inches\n", sum.feet, sum.inch);

    return 0;
}