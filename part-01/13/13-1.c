#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char word[80], temp;
    int i, j, len;
    scanf("%s", word);
    len = strlen(word);
    for (i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        if (word[i] != word[j])
        {
            printf("Not palindrome\n");
            return 0;
        }
    }
    printf("%s is a palindrome.\n", word);

    return 0;
}