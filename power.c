
#include <stdio.h>

int power(int x, int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
    {
        result = result * x;
    }

    return result;
}

int main()
{
    int x, n, result;

    printf("Enter the value of x and n: ");
    scanf("%d %d", &x, &n);

    result = power(x, n);

    printf("%d raised to the power %d = %d", x, n, result);

    return 0;
}