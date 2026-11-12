#include <stdio.h>
int main() {
    int radius;
    printf("enter radius of circle:");
    scanf("%d", &radius);
    // area of circle and this program is for practice of data tpyes in c programming
    float area = 3.14 * radius * radius;
    printf(" Area of circle: %2f\n", area);
    return 0;
}