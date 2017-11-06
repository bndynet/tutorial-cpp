#include <stdio.h>

int pointer()
{
    printf("\n==================== SEC: Pointer ==================\n");

    printf("\n-------------------------\n");
    int i = 0;
    char *s = "ABCD", *p;
    for (p = s; *p; p++)
    {
        printf("%s\n", p);
        /* =>
        ABCD
        BCD
        CD
        D
        */
    }

    return 0;
}