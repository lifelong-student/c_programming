#include <stdio.h>
/*
Program to demonstrate while loop
a) using condition and increment operator
b) using condition and decrement operator
*/
int main()
{
    int stepSize = 1;
    //loop with increment operator
    while (stepSize <= 4) //1,2,3,4,(5)
    {
        printf("%d\t", stepSize); //1   2   3   4
        stepSize++; //2,3,4,5
    }
    printf("\n stepSize :%d after first while loop \n", stepSize); //5

    //loop with decrement operator
    while (stepSize--)
    {
        printf("%d \t", stepSize); //5 4 3 2 1
    }

    stepSize = 10;

    while (stepSize) //10,9....1(0)
    {
        printf("Hello \t");
        stepSize--;
    }

    return 0;
}