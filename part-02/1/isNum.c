#include <stdio.h>

int isNum(char ch)
{
    if (ch >= '0' && ch <= '9')
        return 1;
    else
        return 0;
}

int main()

{
    char c;
    scanf("%c", &c);
    printf("%d", isNum(c));
    return 0;
}