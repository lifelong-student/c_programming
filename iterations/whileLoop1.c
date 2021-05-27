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
    while (stepSize <= 4)
    {
        printf("%d \t", stepSize);
        stepSize++;
    }
    printf("\n stepSize :%d after first while loop \n", stepSize);

    //loop with decrement operator
    while (stepSize--)
    {
        printf("%d \t", stepSize);
    }

    stepSize = 10;

    while (stepSize)
    {
        printf("Hello \t");
        stepSize--;
    }
    return 0;
}