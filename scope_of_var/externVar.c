/*
Program to demonstrate 'extern' storage class:
Highlight: Variable delcared with 'extern' keyword is defined at one location(globally/other file) and used in other location.

a. storage area: Data segment
b. default value: zero (0)
c. scope: global/across files
d. lifetime: till program ends
*/
#include <stdio.h>
extern int var;

int main(void)
{
  //var=2; //Try uncommenting this and compiler will give error.
  printf("Value of 'extern' variable is not used, so no error");
  return 0;
}