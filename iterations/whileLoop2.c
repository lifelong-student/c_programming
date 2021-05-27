#include <stdio.h>
/* Program to demonstrate:
a) multiple conditions
b) usage of relational and logical operators
 for conditions inside while loop
 */
int main()
{
    int step1 = 1, step2 = 5;
    /*
    while loop with logical OR
    */
    while (step1 <= 4 || step2 >= 1)
    {
        printf("%d %d\n", step1, step2);
        step1++;
        step2--;
    }
    /*
    while loop with logical AND
    */
    while (step1 >= 4 && step2 <= 5)
    {
        printf("%d %d\n", step1, step2);
        step1--;
        step2++;
    }
    return 0;
}