#include <stdio.h>

int main()
{
    int i, n, sum;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Summation is %d\n", sum);

    return 0;
}