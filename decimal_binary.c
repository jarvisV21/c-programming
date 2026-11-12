#include <stdio.h>

int main() {
    int decimal, temp;
    int binary[32]; // Array to store binary digits (up to 32 bits)
    int i = 0, j;

    printf("Enter a non-negative decimal integer: ");
    scanf("%d", &decimal);

    if (decimal < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    if (decimal == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    temp = decimal;

    // Store remainders in array
    while (temp > 0) {
        binary[i] = temp % 2;
        temp = temp / 2;
        i++;
    }

    // Print array in reverse order
    printf("Binary equivalent of %d: ", decimal);
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}