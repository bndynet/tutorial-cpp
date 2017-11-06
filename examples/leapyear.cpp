#include <stdio.h>

int leapyear()
{
    printf("\n==================== SEC: Leap Year (1000 - 3000) ==================\n");
    int beginYear = 1000;
    int endYear = 3000;
    for (int i = beginYear; i <= endYear; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}