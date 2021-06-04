#include <stdio.h>
#include <stdlib.h>
int get_random_num();
/*
Program to demonstrate function definition:
a. without arguments
b. with return type
*/
int main()
{
    int n, i, flag = 0;

    n = get_random_num();
    printf("The random number is: %d",n);

    return 0;
}

int get_random_num()
{
    return rand();
}