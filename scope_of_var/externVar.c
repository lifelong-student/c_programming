#include <stdio.h>
/*
Program to demonstrate extern variable
*/
extern int var;
int main(void)
{
  //var=2;
  printf("Value of 'extern' variable is not used, so no error");
  return 0;
}