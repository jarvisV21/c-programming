#include <stdio.h>

int main() {
    int num, temp, remainder;
    int sum = 0, reverse = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    temp = num; // Store original number for operations

    while (temp > 0) {
        remainder = temp % 10;
        sum += remainder;                      // Add digit to sum
        reverse = (reverse * 10) + remainder;  // Append digit to reverse
        temp /= 10;                            // Remove last digit
    }

    printf("\n--- Results ---\n");
    printf("Original Number: %d\n", num);
    printf("Sum of Digits: %d\n", sum);
    printf("Reversed Number: %d\n", reverse);

    return 0;
}