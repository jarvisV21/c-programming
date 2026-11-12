#include<stdio.h>
// this is recursive funtion to find to calculate  power 
double power(double base, int exp)
// Base case: if exponent is 0, return 1
{
    if (exp == 0)
        return 1;
    else if (exp < 0) // If exponent is negative, calculate the reciprocal
        return 1 / power(base, -exp);
    else // Recursive case: multiply base by the result of power with exp-1
        return base * power(base, exp - 1);
}
