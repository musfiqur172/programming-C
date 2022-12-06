#include <stdio.h>

int main()

{
    char ch = 'W';

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is upper case\n", ch);
    }
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is lower case\n", ch);
    }

    return 0;
}