//GCD of Two Numbers Using a Function
#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main()
{
    int a, b;

    printf("Enter two non-negative numbers: ");
    scanf("%d %d", &a, &b);

    if (a < 0 || b < 0 || (a == 0 && b == 0))
    {
        printf("Invalid input.\n");
    }
    else
    {
        printf("GCD = %d\n", gcd(a, b));
    }

    return 0;
}
