#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n, hpow = 1, pos, sum = 0, lpow;
    char binary[65];
    int len, decimal, power, i;

    printf("Enter the decimal number: ");
    scanf("%d", &n);

    i = 0;
    while (pow(2, i) <= n)
    {
        hpow = i;
        i++;
    }

    printf("highest power is %d\n", hpow);

    for (i = 0; i < hpow + 1; i++)
    {
        binary[i] = '0';
    }

    binary[i] = '\0';

    sum = 0;

    for (i = 0; binary[i] != '\0'; i++)
    {
        sum += pow(2, hpow);
        if (sum <= n)
        {
            binary[i] = '1';
        }
        else
        {
            sum -= pow(2, hpow);
        }
        hpow--;
    }

    printf("Binary value is %s\n", binary);
}