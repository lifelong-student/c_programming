/* Program to demonstrate:
1) various ways to write for loop
*/
#include <stdio.h>

int main()
{
    int step;
    //Way-1 pre inc
    for (step = 1; step < 11; ++step) 
    {
        printf("%d ", step);
    }
    printf("\n");
    //Way-2 post inc
    for (step = 1; step < 11; step++)
    {
        printf("%d ", step);
    }
    printf("\n");
    //Way-3
    for (step = 1; step < 11;)
    {
        printf("%d ", step);
        step++;
       // ++step;
       // step+=1;
       // step=step+1;
    }
    printf("\n");
    step = 1;
    //Way-4
    for (; step < 11;)
    {
        printf("%d ", step);
        step++;
    }
    return 0;
}