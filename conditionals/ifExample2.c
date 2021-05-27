/*
if else example: to capture true and false events
*/

#include <stdio.h>
#include <ctype.h>
int main()
{
    char dummy;
    printf("Enter value for dummy:");
    scanf("%c", &dummy);

    if (isalpha(dummy))  //condition-1
        printf("You entered an alphabet"); //executes if condition at line 13 is true. Notice we can skip {} in case there is single statmenet after if or else
    else  //implicit condition-2 (will execute when if condition becomes false) 
        {
            printf("You entered a non alphabet"); //executes if condition in line 13 is false
        }
    return 0;
}

