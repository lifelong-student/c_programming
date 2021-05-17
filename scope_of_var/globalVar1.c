#include <stdio.h>

/*Program to demonstrate scope of a vairable:
1. Local
2. Global
*/
int x = 10;

void fun1()
{
    /*local variable of same name*/
    int x = 5;
    printf("%d\n",x); //value of variable 'x' local to fun1() will be printed
}

int main()
{
    printf("%d\n",x); //value of variable 'x' present globally will be printed, as no local def
    fun1();
}