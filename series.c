
#include <stdio.h>

int sum(int a[], int n)
{
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        s = s + a[i];
    }

    return s;
}

int main()
{
    int n, a[100], total;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    total = sum(a, n);
    average = (float)total / n;

    printf("Sum = %d\n", total);
    printf("Average = %.2f\n", average);

    return 0;
}
