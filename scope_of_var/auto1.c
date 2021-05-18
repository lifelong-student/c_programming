/*
Program to demonstrate 'auto' storage class:
Highlights: 'auto' is default storage type for a variable. Writing 'auto' keyword is optional

a. storage area: function's stack
b. default value: garbage
c. scope: within block/function defined
d. lifetime: end of the block
*/
#include <stdio.h>
int main()
{
    auto int foo1 = 5; //explicitly decalriing foo1 as auto
    char foo2 = 'c';   //By default, any variable is 'auto' type
    printf("%d %d", foo1, foo2);
    return 0;
}