#include <stdio.h>
#include <string.h>

int datatype()
{
    printf("\n==================== SEC: Data Type ==================\n");

    printf("\n-------------------------\n");
    static char s[20] = {'b', 'n', 'd', 'y'};
    printf("strlen  => %d\n", strlen(s)); // => 4

    printf("\n-------------------------\n");
    int a = 023;
    printf("=> int a = 023;\n");
    printf("print a  =>  %d\n", a); // => 19

    printf("\n-------------------------\n");
    printf("sizeof(int)   =>  %d\n", sizeof(int));
    printf("sizeof(long)   =>  %d\n", sizeof(long));
    printf("sizeof(float)   =>  %d\n", sizeof(float));
    printf("sizeof(double)   =>  %d\n", sizeof(double));
    printf("sizeof(char)   =>  %d\n", sizeof(char));

    printf("\n-------------------------\n");
    union MYTYPE {
        long x;
        int y[4];
        char z[6];
    } them;
    printf("=> union MYTYPE { long x; int y[4]; char z[6];}");
    printf("sizeof(them)    => %d\n", sizeof(them));

    return 0;
}