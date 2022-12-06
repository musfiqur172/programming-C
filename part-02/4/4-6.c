#include <stdio.h>

void recurse(int count)
{
    if (count == 5)
    {
        return;
    }
    printf("Count = %d\n", count);
    printf("I am learning recursion.\n");
    recurse(count + 1);
}

int main()
{
    recurse(0);
    return 0;
}