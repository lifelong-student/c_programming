/*
Else-if ladder: 
a. useful when out of mutiple conditions, only one can be true.
b. for default value, we can optionally have else as the last condition.

*/
#include <stdio.h>
#include <ctype.h>
int main()
{
    char dummy;
    printf("Enter value for dummy:");
    scanf("%c", &dummy);

    if (isalpha(dummy)) //condition-1
    {
        printf("You entered an alphabet"); ///executes if condition at line 15 is true
    }
    else if (isdigit(dummy)) //condition-2 (checked only if condition-1 is false)
    {
        printf("You entered a digit"); //executes if condition in line 15 is false and condition at line 19 is true
    }
    else if (isspace(dummy)) //condition-3 (checked only if condition-1 and 2 are false)
    {
        printf("You entered a whitespace"); //executes if condition in line 15 and 19 are false and condition at line 23 is true
    }
    else if (ispunct(dummy))                       //condition-4 (checked only if condition-1,2 and 3 are false)
        printf("You entered a punctuation mark"); //executes if condition in line 15,19 and 23 are false and condition at line 27 is true
    else                                          //(optional)
    {
        printf("None of the matching characters"); //statmenets inside last else executes if all above conditons are false
    }

    return 0;
}