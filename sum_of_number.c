#include <stdio.h>

// Recursive function to find sum of digits
int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Handling negative numbers
    int temp = (num < 0) ? -num : num;
    
    printf("Sum of digits of %d is: %d\n", num, sumOfDigits(temp));
    return 0;
}
