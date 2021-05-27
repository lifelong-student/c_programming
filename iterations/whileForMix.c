#include <stdio.h>
/* Program to demonstrate:
1) nested for loop
2) updating increment/decrement (stepsize) w/o inc/dec operators
*/
int main()
{
    for (int loopVar1 = 1; loopVar1 < 5; loopVar1++) //1,2,3,4
    {
        //char loopVar2='a';
        char loopVar2 = 97; //(same as line 10)
        while (++loopVar2 < 'f')
        {
            printf("%c\t", loopVar2);
            //loopVar2++; (can increment loopVar2 here if not done in while condition)
            
        }
        //printf("\n"); (same as putchar)
        putchar('\n');
    }
    return 0;
}