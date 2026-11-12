// palindrome number problem
#include <stdio.h>

int main()
{
    int n, original, remainder, reverse = 0, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;

    int temp = n;

    while (temp != 0)
    {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp = temp / 10;
        count++;
    }

    if (original == 0)
        count = 1;

    printf("Number of digits = %d\n", count);

    if (original >= 0 && original == reverse)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}
