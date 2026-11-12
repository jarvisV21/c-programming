#include<stdio.h>
int main()
{
int a,b=2;
int c,d;
int *g;
c=d=3;
printf("Enter a value");
scanf("%d",&a);
g=&a;
printf("a's address is %p \n",g);
c=a+b+c+d;
printf("a+b+c+d=%d",c);

} 