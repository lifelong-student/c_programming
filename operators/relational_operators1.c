/*
Program to demonstrate following relational operators as per priority and associtavity:
a. < <= > >= [L->R]
b. == != [L->R]
*/
#include <stdio.h>

int main()
{
    if (70  != 5) 
        printf("70 is not equal to 5\n"); //executed

    if (!70 % 5) //priority of ! is more than %
        printf("Learning is fun\n"); //not executed

    if (!(70 % 5)) // priority of () is more than !
        printf("C coding\n"); //executed

    if ((3 + 3 > 5) && (10 != 2 || !34)) 
        printf("Programming Fundamentals\n"); //executed
    return 0;
}