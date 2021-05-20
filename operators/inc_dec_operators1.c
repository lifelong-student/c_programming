/*
Program to demonstrate the following increment and decrement operators as per priority and associtavity:
a. post increment/decrement [L->R]
b. pre increment/decrement [R->L]
*/
#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    a = 2, b = 4, c = 2, d = 0, e = 0;

    a = ++b + ++c;
    printf("a: %d b: %d c: %d\n", a, b, c);

    a = b++ + c++;
    printf("a: %d b: %d c:%d\n", a, b, c);

    d = a++ + --b - c++;
    printf("a: %d b: %d c: %d d:%d\n", a, b, c, d);

    e = --a - b++ + ++c - d--;
    printf("a: %d b: %d c: %d d:%d e: %d\n", a, b, c, d, e);

    return 0;
}