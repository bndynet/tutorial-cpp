#include <stdio.h>

int _operator()
{
    printf("\n==================== SEC: Operator ==================\n");

    printf("\n-------------------------\n");
    int i = 0;
    printf("=> int i = 0;\n");    // => 0
    printf("i++  =>  %d\n", i++); // => 0
    printf("i    =>  %d\n", i);   // => 1
    printf("i--  =>  %d\n", i--); // => 1
    printf("i    =>  %d\n", i);   // => 0
    printf("++i  =>  %d\n", ++i); // => 1
    printf("i    =>  %d\n", i);   // => 1
    printf("--i  =>  %d\n", --i); // => 0
    printf("i    =>  %d\n", i);   // => 0
    i = 6;
    printf("i, i++, --i  => %d, %d, %d", i, i++, --i);

    printf("\n-------------------------\n");
    int b = 8;
    printf("=> int b = 8;\n");
    b += b -= b * b;                    /* same as: 
    b -= b*b;   // => b = -56
    b += b;     // => b = -112
    */
    printf("b+=b-=b*b    =>  %d\n", b); // => -112

    printf("\n");
    return 0;
}