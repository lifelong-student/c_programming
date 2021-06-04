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

    for (int loopVar1 = 1; loopVar1 < 5; loopVar1++) //1.....4(5)
    {
        for (float loopVar2 = 1.0; loopVar2 < 5.0; loopVar2++) //1.0 2.0....... 4.0 (5.0)
        {
            printf("%.2f\t", loopVar2); //1.0 2.0 3.0 4.0
        }
        //printf("\n"); (same as putchar)
        putchar('\n');
    }
    putchar('\n');

    for (int loopVar1 = 1; loopVar1 < 5; loopVar1++)
    {
        for (float loopVar2 = 1.0; loopVar2 < 2.0; loopVar2 = loopVar2 + 0.20) //1.00, 1.20, 1.40.... 1.80, (2.0)
        {
            printf("%.2f\t", loopVar2);
        }
        //printf("\n"); (same as putchar)
        putchar('\n');
    }
    return 0;
}