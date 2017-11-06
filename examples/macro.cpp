#include <stdio.h>

#define N 2 + 2
#define X (2 + 2)
#define F(a) a *a

int macro()
{
    printf("\n==================== SEC: Macro ==================\n");

    printf("\n-------------------------\n");
    int i = N * N;                // same as: i = 2+2*2+2
    printf("N * N   => %d\n", i); // => 8

    i = X * X;                    // same as: i = (2+2)*(2+2)
    printf("X * X   => %d\n", i); // => 16

    i = F(4 + 3);                 // same as: i = 4+3*4+3
    printf("F(4+3)  => %d\n", i); // => 19



    return 0;
}