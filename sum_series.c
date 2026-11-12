
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

long long nCr(int n, int r)
{
    return factorial(n) /
           (factorial(r) * factorial(n - r));
}

long long nPr(int n, int r)
{
    return factorial(n) / factorial(n - r);
}

int main()
{
    int n, r;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    if (n < 0 || r < 0 || r > n || n > 20)
    {
        printf("Invalid input");
        return 1;
    }

    printf("nCr = %lld\n", nCr(n, r));
    printf("nPr = %lld\n", nPr(n, r));

    return 0;
}