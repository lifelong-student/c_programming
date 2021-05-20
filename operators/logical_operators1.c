/*
Program to demonstrate following logical operators as per priority and associtavity:
a. ! (R->L)
b. && (L->R)
c. || (L->R)

*/
#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 2;

    //logical NOT (unary operator)

    if (num1) //same as if(10) means if(true)
        printf("conditon is true with num1: %d\n", num1);

    if (!num1)                       //same as if(0) means if(false)
        printf("conditon is false\n"); //this statement will not be executed as condition is false
    printf("Value of !num1 should be true. Here's proof, !num1: %d\n", !num1);

    if (num1 != num2)
        printf("num1: %d and num2: %d are not equal\n",num1,num2);

    if (!(num1 == num2)) //same as: num1 != num2
        printf("num1: %d and num2: %d are not equal\n",num1,num2);
    
    num1 = 75;
    if (num1 != 0)
        printf("num1: %d is not equal to zero.\n", num1);

    if (num1 != num2)
        printf("num1 is not equal to num2\n");

    int num3 = !num1;
    printf("num3: %d have value of !num1\n", num3);

    
    //logical AND (binary operator)
    
    if (num1 >= 70 && num2 == 2) //compound relational expression
        printf("num1: 75 and num2:2\n");

    num3 = (num1 == 75 || num2 == 2);
    printf("num3: %d\n", num3); //num3 has result of compound relational expression i.e true

    return 0;
}