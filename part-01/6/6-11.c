#include <stdio.h>

int main()
{
    int ft_marks[10] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 41},
        st_marks[10] = {86, 97, 95, 93, 95, 86, 52, 49, 41, 42},
        final_marks[10] = {87, 64, 91, 43, 89, 66, 58, 73, 99, 81};

    int i;
    double total_marks[10];
    for (i = 0; i < 10; i++)
    {
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
    }

    for (i = 1; i <= 10; i++)
    {
        printf("Roll NO: %d\tTotal Marks: %0.0lf\n", i, total_marks[i - 1]);
    }

    return 0;
}