#include<stdio.h>
#include<math.h>
int main() {
   /*
 Write a program to check if a number is divisible by 2 or not.
   */
float num;
printf("enter a number:");
    scanf("%f",&num);
    if (num/2== floor(num/2)) {
        printf("the number is divisible by 2\n");
    } else {
        printf("the number is not divisible by 2\n");
    }
return 0;
}