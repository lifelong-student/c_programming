#include <stdio.h>
/*
Program to demonstrate various ways to 
a) achieve infinite loop
Tip: Ctrl+C on terminal to end the execution
*/
int main()
{
    //infinite loop-examples
    while (10.5)
    {
        printf("Hello \t");
    }
    while ('a')
    {
        printf("Hello \t");
    }
    while (10)
    {
        printf("Hello \t");
    }
    //As 0 value, it is considered false and the while loop below will not be executed
    while (0)
    {
        printf("Hello \t");
    }
    return 0;
}