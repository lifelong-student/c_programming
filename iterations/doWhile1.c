#include <stdio.h>
/* Program to demonstrate:
a) do-while
*/
int main()
{
    int loopInvariant = 1;
    do
    {
        printf("loopInvariant: %d\n", loopInvariant);
        loopInvariant = loopInvariant + 1;
        //loopInvariant++; (same as line 9; increment operator)
        //loopInvariant+=1; (same as line 9;compound assigmnment operator)
    } while (loopInvariant <=10); //exit controlled loop

    return 0;
}