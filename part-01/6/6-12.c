#include <stdio.h>

int main()
{
    int marks, i, count;

    int total_marks[] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61};

    for (marks = 50; marks <= 100; marks++)
    {
        count = 0;
        for (i = 0; i <= 10; i++)
        {
            if (total_marks[i] == marks)
            {
                count++;
            }
        }

        printf("Marks: %d Count: %d\n", marks, count);
    }

    return 0;
}