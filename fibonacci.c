//Fibonacci Series Using Functions
#include <stdio.h>

void fibonacci(int n)
{
    int a = 0, b = 1, c;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 1 || n > 46)
    {
        printf("Enter a number between 1 and 46.\n");
    }
    else
    {
        fibonacci(n);
    }

    printf("\n");

    return 0;
}
