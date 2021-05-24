#include <stdio.h>
#include <stdlib.h>
/*
This program to demonstrate backward jump
*/
int main()
{
   int var = 1;

backwardJump: //label definition (giving a pc of code block a name)
{
   if (var > 10)
      exit(0);                          //exit the program
   printf("Value of var is: %d \n", var); //1,2,3,4,..... (iteration/loop)
}

   var = var + 1;     //2,
   goto backwardJump; //unconditional backward jump

   return 0;
}