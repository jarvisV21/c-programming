#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, remainder, digits = 0;
    double sum = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Negative numbers cannot be Armstrong numbers.\n");
        return 0;
    }

    temp = num;

    // Count the total number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    // Calculate sum of individual digits raised to power of total digits
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    // Check if sum equals original number
    if ((int)sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is NOT an Armstrong number.\n", num);
    }
   return 0;
}