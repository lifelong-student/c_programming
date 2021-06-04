#include <stdio.h>
/* Practice program to explain recursion w.r.t
a. auto variable
b. static variable
*/
int incr(int i) //incr(5)
{
    int count = 0;
    if (i <= 0)
        return 0;
    count = count + 1; // in each stack
    return count + incr(i - 1); //count+inc(4), count+inc(3), count+inc(2), count+inc(1), count+inc(0)
}

int add(int i) //add(5),add(4),add(3),add(2),add(1),add(0)
{
    static int count = 0; //skip initialization of static variable 2nd time onwards
    if (i <= 0)
        return 0;
    count = count + 1; //1,2,3,4,5
    return count + add(i - 1); //25, 20, 15, 10, 5
}

int main()
{
    int j;
    j = incr(5); //call to recursive function having auto local variable
    printf("Value of 'j' in case of local variable in function call: %d\n", j);
    j = add(5); //call to recursive function having static local variable
    printf("Value of 'j' in case of static variable in function call: %d\n", j);
    return 0;
}