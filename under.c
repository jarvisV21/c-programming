#include <stdio.h>
#define VALUE 100

#undef VALUE

int main()
{
#ifdef VALUE
    printf("Defined");
#else
    printf("Not Defined");
#endif

    return 0;
}