/*
Program to demonstrate condtional/ternary operator
*/
#include <stdio.h>

int main()
{
    int m = 5, n = 4;

    (m > n) ? printf("m is greater than n that is %d > %d", m, n) : printf("n is greater than m that is %d > %d", n, m);
    int res = m > n : m : n;
    printf("%d", res);
    return 0;
}