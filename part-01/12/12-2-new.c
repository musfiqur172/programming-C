#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, i = 0;
    char binary[100];

    scanf("%d", &n);

    while (n != 0)
    {
        binary[i] = (n % 2) + '0';
        n /= 2;
        i++;
    }

    binary[i] = '\0';
    strrev(binary);

    puts(binary);

    return 0;
}