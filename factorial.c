// Factorial of a Given Number Using Functions
#include <stdio.h>

long long factorial(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0 || n > 20)
    {
        printf("Enter a number between 0 and 20.\n");
    }
    else
    {
        printf("Factorial = %lld\n", factorial(n));
    }

    return 0;
}
