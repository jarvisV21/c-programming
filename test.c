#include<stdio.h>
int main()
{
printf("charecter size is = %d bytes \n", sizeof(char));
printf("short integer size is = %d bytes \n", sizeof(short));
printf("integer size is = %d bytes \n", sizeof(int));
printf("long integer size is = %d bytes \n", sizeof(long));
printf("long long integer size is = %d bytes \n", sizeof(long long));
printf("flaot size is = %d bytes \n", sizeof(float));
printf("double size is = %d bytes \n", sizeof(double));
printf("long DOUBLE size is = %d bytes \n", sizeof(long double));
printf("HELLO size is = %d bytes \n", sizeof("HELLO"));
}