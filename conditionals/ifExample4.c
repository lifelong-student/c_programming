/*
nested if: One more complex example.
We can do nesting of only ifs/ single if else/ else if ladder inside both if or else part.
*/

#include <stdio.h>
#include <ctype.h>
int main()
{
    char dummy;
    printf("Enter value for dummy:");
    scanf("%c", &dummy);

    if (isalnum(dummy)) //(outer if)
    {
        if (isdigit(dummy)) //(inner if)
        {
            printf("You entered a digit"); //executed if condition at line 14 is true and condition at line 16 is true
        }
        else
        {
            printf("You entered an alphabet"); //executed if condition at line 14 is true and line 16 is false.
        }
    }
    else
    { //(outer else matching to if at line 14)

        if (isspace(dummy)) //(inner if)
        {
            printf("You entered a digit"); //executed if condition at line 14 is false and condition at line 26 is true
        }
      if (ispunct(dummy)) //(inner if)
        {
            printf("You entered a digit"); //executed if condition at line 14 is false and condition at line 30 is true
        }
    }
    return 0;
}