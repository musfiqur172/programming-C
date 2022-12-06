#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int ara[] = {3, 1, 5, 2, 4};

    int i, j, temp;

    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            if (ara[j] < ara[i])
            {
                temp = ara[j];
                ara[j] = ara[i];
                ara[i] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", ara[i]);
    }
    return 0;
}