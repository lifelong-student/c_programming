#include <stdio.h>
/*
Program to demonstrate function definition:
a. without arguments
b. without return type
*/
void check_prime();

int main()
{
    check_prime();    // argument is not passed
    return 0;
}

// return type is void meaning doesn't return any value
void check_prime()
{
    int num, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&num);

    for(i=2; i <= num/2; ++i)
    {
        if(num%i == 0)
        {
          printf("not prime");
          return;
        }
    }
    
        printf("%d is  a prime .", num);

}