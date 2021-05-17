#include <stdio.h>
/*
Program to demonstrate usage of extern 
*/

extern int var1 = 75;
//extern int var1; (not allowed)
int var2;

int main()
{
    extern int var1; //var1 is defined outside
    printf("The value of extern variables var1 : %d\n", var1); //75
    printf("The value of extern variables var2 : %d\n", var2); //0-default value for an extern variable
    var1 = 75 / 3;
    extern int var2;
    var2 = 20; //definition of the extern variable
    printf("The value of modified extern variable var1 : %d\n", var1); //25
    printf("The value of modified extern variables var2 : %d\n", var2); //20
    return 0;
}