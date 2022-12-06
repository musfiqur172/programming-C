#include <stdio.h>
#include <math.h>

char ara[20];
int size = 20;

void print_ara();
void sieve();
char is_prime();

int main()
{
    int n, m;

    sieve();

    while (1)
    {
        printf("Please enter a number (enter 0 to exit): ");
        scanf("%d", &n);

        if (n == 0)
        {
            break;
        }

        if (n >= size)
        {
            printf("The number should be less than %d\n", n);
            continue;
        }

        if ('1' == is_prime(n))
        {
            printf("%d is a prime number.\n", n);
        }
        else
        {
            printf("%d is not a prime number.\n", n);
        }
    }

    return 0;
}

void print_ara()
{
    int i;

    for (i = 2; i < size; i++)
    {
        printf("%4c", ara[i]);
    }

    printf("\n");

    for (i = 2; i < size; i++)
    {
        printf("----");
    }

    printf("\n");

    for (i = 2; i < size; i++)
    {
        printf("%4d", i);
    }
}

void sieve()
{
    int i, j, root;

    for (i = 2; i < size; i++)
    {
        ara[i] = '1';
    }

    root = sqrt(size);
    print_ara();

    for (i = 2; i <= root; i++)
    {
        if (ara[i] == 1)
        {

            for (j = 2; i * j <= size; j++)
            {
                ara[i * j] = '0';
            }
            print_ara();
        }
    }

    printf("\n");
}

char is_prime(int n)
{
    int i;

    if (n < 2)
    {
        return '0';
    }

    return ara[n];
}