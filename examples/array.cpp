#include <stdio.h>

int array()
{
    printf("\n==================== SEC: Array ==================\n");

    char s[4] = {'a', 'b'};
    char s1[] = {'b', 'c'};
    
    char s2[] = {"i am ok"};
    char s3[] = "i am ok";

    /* s in memory:
    | a | b | \0 | \0 |
    NOTE: if print \0, it will stop output.
    */
    printf("%s\n", s);      // => ab
    for (int i = 0; i < 4; i++)
    {
        if (s[i] != '\0') {
            printf("%c\n", s[i]);
            // printf("%s", s[i]);   // error
        }
    }

    char (*p)[4] = &s;
    printf("==%s\n", p);      // => ab
    printf("==%s\n", *p);      // => ab

    char ss[3][3] = { {'1', '1', '1'}, {'2', '2', '2'}, {'3','3','3'}};
    printf("------------------\n");
    printf("%s\n", ss);             // => 111222333i am ok 
    printf("%s\n", ss[1]);          // => 222333i am ok
    printf("%s\n", ss[2]);          // => 333i am ok

    printf("%c\n", ss[2][0]);          // => 3
    //printf("%s\n", ss[2][0]);          // error

    printf("------------------\n");
    for (int a = 0; a < 3; a++)
    {
        printf("\nss[%d]->\t", a);
        for (int b = 0; b < 3; b++)
        {
            printf("ss[%d][%d]:%c\t", a, b, ss[a][b]);
        }
    }
    printf("\n");


    printf("------------------\n");
    char (*pRow)[3] = ss;
    printf("%s\n", pRow);   // => 111222333i am ok
    printf("%s\n", pRow+1);   // => 222333i am ok

    return 0;
}