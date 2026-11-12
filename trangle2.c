#include <stdio.h>
#include <math.h> // Required for sqrt() function

int main() {
    int choice;

    printf("Choose method to calculate area of triangle:\n");
    printf("1. Using Base and Height\n");
    printf("2. Using Three Sides (Heron's Formula)\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        float base, height, area;

        printf("Enter base: ");
        scanf("%f", &base);
        printf("Enter height: ");
        scanf("%f", &height);

        area = 0.5 * base * height;
        printf("Area of Triangle = %.2f\n", area);

    } else if (choice == 2) {
        float a, b, c, s, area;

        printf("Enter three sides of the triangle: ");
        scanf("%f %f %f", &a, &b, &c);

        // Check for valid triangle inequality condition
        if ((a + b > c) && (a + c > b) && (b + c > a)) {
            s = (a + b + c) / 2.0;
            area = sqrt(s * (s - a) * (s - b) * (s - c));
            printf("Semi-perimeter (s) = %.2f\n", s);
            printf("Area of Triangle = %.2f\n", area);
        } else {
            printf("Invalid triangle! The sum of any two sides must be greater than the third.\n");
        }

    } else {
        printf("Invalid choice!\n");
    }

    return 0;
} 