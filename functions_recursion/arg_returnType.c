/*
Program to demonstrate function definition:
a. with arguments
b. with return type
*/
#include <stdio.h>
int check_prime(int number);

int main()
{
    int number, flag;

    printf("Enter a positive integer: ");
    scanf("%d",&number);

    flag = check_prime(number);

    if(flag == 1)
        printf("%d is not a prime number",number);
    else
        printf("%d is a prime number",number);

    return 0;
}

int check_prime(int number)
{
    int i;

    for(i=2; i <= number/2; ++i)
    {
        if(number%i == 0)
            return 1;
    }

    return 0;
}