#include <stdio.h>

int main()
{
    double a1, a2, b1, b2, c1, c2, x, y, d;

    printf("a1 = ");
    scanf("%d", &a1);

    printf("b1 = ");
    scanf("%d", &b1);

    printf("c1 = ");
    scanf("%d", &c1);

    printf("a2 = ");
    scanf("%d", &a2);

    printf("b2 = ");
    scanf("%d", &b2);

    printf("c2 = ");
    scanf("%d", &c2);

    d = a1 * b2 - a2 * b1;

    if ((int)d == 0)
    {
        printf("Value of x and y can not be determined.\n");
    }
    else
    {
        x = (b2 * c1 - b1 * c2) / d;
        y = (a1 * c2 - a2 * c1) / d;
    }

    printf("x = %0.2lf, y = %0.2lf\n", x, y);

    return 0;
}