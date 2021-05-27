#include <stdio.h>

/*
Program to demonstrate:
1) multiple conditions inside for loop
2) multiple loop variables
*/
int main()
{
    int loopVar1, loopVar2;

    //Can initiliase loop variable outside or inside loop
    loopVar1 = 1;
    loopVar2 = 5;
    for (loopVar1 = 1, loopVar2 = 5; loopVar2 >= 4, loopVar1 <= 5; loopVar1++)
    {
        printf("Product of %d and %d is %d \n", loopVar1,loopVar2, loopVar1 * loopVar2);
        loopVar2--;
    }
    return 0;
}