#include <stdio.h>
#define AGE 21

int main()
{
#ifdef AGE
    printf("AGE is defined");
#endif

    return 0;
}