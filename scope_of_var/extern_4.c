/*
Program to demonstrate 'extern' storage class:
Highlight: Variable delcared with 'extern' keyword is defined at one location(globally/other file) and used in other location.

a. storage area: Data segment
b. default value: zero (0)
c. scope: global/across files
d. lifetime: till program ends
*/
#include <stdio.h>
extern int var = 2;
int main(void)
{
  //extern int var=2;
  extern int var;

  printf("%d", var); //no error on usage of 'var' as extern variable 'var' has been assigned a value of 2 outisde.
  return 0;
}