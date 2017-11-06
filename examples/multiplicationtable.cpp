#include <stdio.h>

int multiplicationtable()
{
    printf("\n==================== SEC: Multiplication Table ==================\n");

    for (int a = 1; a < 10; a++)
    {
        printf("\n");
        for (int b = 1; b <= a; b++)
        {
            printf("%d * %d = %d\t", b, a, a * b);
        }
    }

    return 0;
}