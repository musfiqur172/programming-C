#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int grid[10][10];
    int x, y;
    int n;
    int i, j;
    char c;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            grid[i][j] = 1;
        }
    }

    printf("Please enter the number of blocked cells: ");
    scanf("%d", &n);
    printf("Now enter the cells: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        grid[x][y] = 0;
    }

    printf("Please enter the initial position: ");
    scanf("%d %d", &x, &y);

    while (1)
    {
        scanf("%c", &c);
        if (c == 'S')
        {
            break;
        }
        else if (c == 'U')
        {
            x--;
        }
        else if (c == 'D')
        {
            x++;
        }
        else if (c == 'R')
        {
            y++;
        }
        else if (c == 'L')
        {
            y--;
        }

        if (grid[x][y] == 1)
        {
        }
    }

    return 0;
}