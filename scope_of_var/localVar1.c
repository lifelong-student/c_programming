#include <stdio.h>
/*
The program to demonstrate scope a variable inside a function
*/

void fun1()
{
    /*local variable of function fun1*/
   auto int x = 4; //(8-10)
    printf("%d\n", x); //Here, the value of variable 'x'=4 will be printed
}

int main()
{
    auto int x = 10; //local variable of function main (14-22)
    {
        int x = 5;         //local variable of block (17-19) inside main
        printf("%d\n", x); //Here, value of 'x' =5 will be printed
    }
    printf("%d\n", x); //Here, value of variable 'x'=10 will be printed
    fun1();
}