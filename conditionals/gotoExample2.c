#include <stdio.h>
#include <stdlib.h>
/*
This program demonstrates:
1) forward jump via GOTO
*/
int main()
{
    int var = 1;
    goto forwardJump; //jump unconditionally

    printf("not executed");
    printf("not executed");
    printf("not executed");

forwardJump: //label definition (identifier:)
{
    int var = 2; //decl+initial
    printf("Value of var is: %d \n", var);
}

    return 0;
}