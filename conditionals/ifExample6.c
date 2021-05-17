/*
Multiple if: 
a. useful when out of mutiple conditions, many can be true.
*/
#include <stdio.h>
#include <ctype.h>
int main()
{
    char dummy;
    printf("Enter value for dummy:");
    scanf("%c", &dummy);

    /*
    Notice condition-1 and conditon-5 OR condition-1 and conditoin-2 can both be true at the same time, so both will be executed (unlike else if ladder)
    Also, all if conditions will be checked regardless of conditions present before it are true or false.
    */

    if (isalpha(dummy)) //condition-1
    {
        printf("You entered an alphabet"); ///executes if condition at line 18 is true
    }
    if (isdigit(dummy)) //condition-2
    {
        printf("You entered a digit"); //executes if condition at line 22 is true
    }
    if (isspace(dummy)) //condition-3
    {
        printf("You entered a whitespace"); //executes if condition at line 26 is true
    }
    if (ispunct(dummy)) //condition-4
        printf("You entered a punctuation mark"); //executes if condition at line 30 is true

    if (isalnum(dummy)) //conditon-5 
        printf("You entered an alphanumeric character"); //executes if condition at line 33 is true

    return 0;
}