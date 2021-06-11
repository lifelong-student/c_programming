#include <stdio.h>
/*
Program to demonstrate:
designated initialization in structure
*/
struct roll_nums
{
   int roll1, roll2;
};
int main()
{
   // Assignment using using designated initialization using .data-member
   struct roll_nums s1 = {.roll2 = 22, .roll1 = 11};
   struct roll_nums s2 = {.roll2 = 30};
 
   printf ("roll1: %d, roll2: %d\n", s1.roll1, s1.roll2);
   printf ("roll1: %d", s2.roll2);
   return 0;
}