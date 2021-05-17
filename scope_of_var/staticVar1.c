#include <stdio.h>
/* Program to demonstrate static variable */

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
   i++; //6,7

   printf("i is %d and count is %d\n", i); //6,7
}