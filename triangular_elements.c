
#include <stdio.h>

int main() {
    int a[10][10], n, i, j;
    int upper = 0, lower = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i <= j)
                upper += a[i][j];

            if(i >= j)
                lower += a[i][j];
        }
    }

    printf("Upper triangular sum = %d\n", upper);
    printf("Lower triangular sum = %d\n", lower);

    return 0;
}
