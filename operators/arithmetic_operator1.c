/*
Program to demonstrate following arithmetic operators:
a. Addition: +
b. Subtraction: -
c. Multiplication: *
d. Division: /
e. Modulus (Remainder): %
Note: Precedence:same, Associativity; R->L
*/
#include <stdio.h>

int main()
{

    //integer arithmentic
    int num1 = 75;
    int num2 = 3;
    int res;

    printf("\nInteger arithmetic");

    res = num1 + num2;
    printf("Result of additon is %d \n", res);
    res = num1 - num2;
    printf("Result of subtraction is %d \n", res);
    res = num1 * num2;
    printf("Result of multiplication is %d \n", res);
    res = num1 / num2;
    printf("Result of division is %d \n", res);
    res = num1 % num2;
    printf("Result of modulo operation is %d \n", res);

    //floating point arithmetic
    printf("\nFloating point arithmetic\n");
    float fnum1 = 12.0, fnum2 = 5.0, fres;
    printf("Result of +,-,*,/ for decimal numbers: %f %f %f %f \n", fnum1 + fnum2, fnum1 - fnum2, fnum1 * fnum2, fnum1 / fnum2);

    //modulo division is not allowed if even a single operand is floating point
    printf("fnum1 %% fnum2 is not allowed. \n ");
    //fres = fnum1 % fnum2; //Try uncommenting this statement and compiler will give error

    //mixed mode arithmetic
    printf("\nMixed mode arithmetic\n");
    printf("Result of *,/ for integer and floating point numbers: %f %f \n", num1 * fnum2, num1 / fnum2);

    //arithmetic on characters
    printf("\nMisc examples \n");
    char ch='d';
    res= num1+ch;
    printf("Integer and char arithmeitc: %d\n", res);

    return 0;
}