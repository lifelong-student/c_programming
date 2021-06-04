#include <stdio.h>
/*
Program to demonstrate function definition:
a. with arguments
b. without return type
*/

void check_prime(int num);

int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d",&num);

    // num is passed to the function
    check_prime(num);

    return 0;
}

// return type is void meaning doesn't return any value
void check_prime(int num) 
{
    int i, flag = 0;

    for(i=2; i <= num/2; ++i)
    {
        if(num%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        printf("%d is not a prime number.",num);
    else
        printf("%d is a prime number.", num);
}