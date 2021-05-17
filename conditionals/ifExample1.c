/*
Basic if example: to capture single true event
*/

#include <stdio.h>
#include <ctype.h>
int main()
{
    char dummy;
    printf("Enter value for dummy:");
    scanf("%c", &dummy);

    if(isalpha(dummy)) //executes line 15 if condition at line 13 is true
    {
        printf("You entered an alphabet");
    }
    return 0;
}