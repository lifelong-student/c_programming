/*
nested if: if one condition is true, yet other condition is checked (to any no. of levels) inside its body.
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
            printf("You entered a digit"); //executes line 17 if condition is line 13 and line 15 both are true
        }
        else {
            printf("You entered an alphabet");
        }
    }
    return 0;
}