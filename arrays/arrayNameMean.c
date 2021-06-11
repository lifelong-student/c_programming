#include <stdio.h>
/*
Program to demonstrate:
1) Printing base-address of an array i.e. address of first element or 0th index
*/
int main()
{
    int array1[5] = {2}; //array declaration: array1 is an array of 5 elements of int type (compile time initialization)

    printf("By default, array name means address of first element %d\n", array1);
    printf("Or provide &arrayName[0] %d", &array1[0]);

    return 0;
}
