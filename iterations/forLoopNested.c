#include <stdio.h>
/* Program to demonstrate:
1) nested for loop
2) using char, int, float datatype as loop invariant
3) updating increment/decrement (stepsize) w/o inc/dec operators
*/
int main()
{
    for (int loopVar1 = 1; loopVar1 < 5; loopVar1++)
    {
        for (char loopVar2 = 'a'; loopVar2 < 'f'; loopVar2++)
        {
            printf("%c\t", loopVar2);
        }
        //printf("\n"); (same as putchar)
        putchar('\n');
    }
    putchar('\n');

    for (int loopVar1 = 1; loopVar1 < 5; loopVar1++)
    {
        for (float loopVar2 = 1.0; loopVar2 < 5.0; loopVar2++)
        {
            printf("%.2f\t", loopVar2);
        }
        //printf("\n"); (same as putchar)
        putchar('\n');
    }
    putchar('\n');

    for (int loopVar1 = 1; loopVar1 < 5; loopVar1++)
    {
        for (float loopVar2 = 1.0; loopVar2 < 2.0; loopVar2 = loopVar2 + 0.20)
        {
            printf("%.2f\t", loopVar2);
        }
        //printf("\n"); (same as putchar)
        putchar('\n');
    }
    return 0;
}