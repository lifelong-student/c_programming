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
        printf("%d %d\n", step1, step2); //1 5, 2 4, 3 3,4 2,5 1
        step1++; //2,3,4,5,6
        step2--; //4,3,2,1,0
    }
    /*
    while loop with logical AND
    */
    while (step1 >= 4 && step2 <= 5) //6,0, 5 1, 4 2
    {
        printf("%d %d\n", step1, step2);//6 0, 5 1, 4 2
        step1--; //5 4 3
        step2++; //1 2 3
    }

    return 0;
}