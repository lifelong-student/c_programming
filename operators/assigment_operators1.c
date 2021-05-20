/*
Program to demonstrate:
assignment operator (basic, compound, along with comma operator)
*/

#include <stdio.h>

int main()
{

    int num1 = 2, num2 = 4; // = used for initializing variables
    num1 = 10;              //assigning value

    num1 = (20, 15, 10); //assignment operator along with comma operator
    printf("val of num1: %d\n",num1);

    //compound assignment operator (applicable if  first input operan1 and result operand variable are same)
    num1+=num2;
    printf("num1 is: %d\n",num1);

    num2+=0.5/num2;
    printf("num2 is: %d\n",num2);

    //other examples:
    num1-=num2;
    num2*=3;
    num2+='B';
    num2+=19.2;


    return 0;
}