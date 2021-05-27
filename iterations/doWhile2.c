#include <stdio.h>
/* Program to demonstrate:
a) do-while with condition evaluating to false on checking first time (
    Even if condition is false, do while is executed once 
    (as it is exit controlled loop; condition is checked after executing body of loop)
)
*/
int main()
{
    int loopInvariant = 1;
    do
    {
        printf("loopInvariant: %d\n", loopInvariant);
        loopInvariant = loopInvariant + 1;
        //loopInvariant++; (same as line 13)
        //loopInvariant+=1; (same as line 13)
    } while (loopInvariant >= 10);

    return 0;
}