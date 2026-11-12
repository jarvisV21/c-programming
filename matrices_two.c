
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int mul[10][10] = {0};
    int r, c, i, j, k;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter first matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    printf("Addition:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Multiplication is possible for square matrices here
    if(r == c) {
        for(i = 0; i < r; i++) {
            for(j = 0; j < c; j++) {
                for(k = 0; k < c; k++) {
                    mul[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("Multiplication:\n");
        for(i = 0; i < r; i++) {
            for(j = 0; j < c; j++)
                printf("%d ", mul[i][j]);
            printf("\n");
        }
    } else {
        printf("Multiplication requires compatible dimensions.\n");
    }

    return 0;
}
