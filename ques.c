#include <stdio.h>
int main() {
    int side;
    printf("Enter side of square: ");
    scanf("%d", &side);
    int area = side * side;
    printf("Area of square: %d", area);
    return 0;
}