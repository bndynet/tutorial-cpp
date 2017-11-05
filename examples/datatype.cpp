#include <stdio.h>
#include <string.h>

int datatype() {
    printf("==================== SEC: Data Type ==================\n");

    printf("\n-------------------------\n");
    static char s[20] = {'b', 'n', 'd', 'y'};
    printf("strlen  => %d\n",strlen(s));       // => 4

    printf("\n-------------------------\n");
    int a = 023;
    printf("=> int a = 023;\n");
    printf("print a  =>  %d\n", a);         // => 19

}