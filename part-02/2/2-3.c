#include <stdio.h>

int main()
{
    double pi = 3.14159265358;

    double *ptr;

    ptr = &pi;

    printf("Value of pi: %lf\n", pi);
    printf("Value of pi: %lf\n", *ptr);

    return 0;
}