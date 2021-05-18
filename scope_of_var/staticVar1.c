#include <stdio.h>
/*
Program to demonstrate 'static' storage class:
Highlight: Variable delcared with 'static' keyword is initialized only once; it persists the last value (even across multiple function call).

a. storage area: Data segment
b. default value: zero (0)
c. scope: within block/function defined
d. lifetime: till program ends
*/

void func(void); /* function declaration */

int main()
{
   func();
   func();
   return 0;
}

/* function definition */
void func(void)
{
   static int i = 5; /* local static variable */
   i++;              //6,7

   printf("i is %d and count is %d\n", i); //6,7
}