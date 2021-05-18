/*
Program to demonstrate 'register' storage class:
Def: By declaring variable as regsiter type, we request to compiler
to provide memory for variable in CPU register, if available otherwise behaves just like auto vairable.

a. storage area: CPU register
b. default value: garbage
c. scope: within block/function defined
d. lifetime: end of the block
*/
#include <stdio.h>
int main()
{
    register int reg = 5;
    printf("%d", reg);

    //Note: Try uncommenting two statements below and program will not run. Reason being: register addresses can'nt be derived
    //int *ptr = &reg;
    //printf("%u",ptr);
    return 0;
}