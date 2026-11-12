
#include <stdio.h>

int main()
{
    int a, b, x, y, remainder;
    int gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0)
    {
        printf("Please enter positive integers.\n");
        return 1;
    }

    x = a;
    y = b;

    while (y != 0)
    {
        remainder = x % y;
        x = y;
        y = remainder;
    }

    gcd = x;
    lcm = (a / gcd) * b;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}
