#include <stdio.h>
int main() {
    // this program is for practice of my idea that shows ashutosh kutta that he knows well 
    int number;
    printf("Enter a number:");
    scanf("%f", &number);
    int A = number;
    int B = number;
    int C = A + B;
    scanf("%2f", &C);
    printf("A + B = %f", C);
    printf("You entered: %f", C);
    return 0;
}