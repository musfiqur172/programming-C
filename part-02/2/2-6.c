#include <stdio.h>

int main()
{
    int x = 10;
    int y;
    int *p;

    printf("Value of x: %d\n", x);

    p = &x;
    y = *p;
    *p = 15;

    return 0;
}