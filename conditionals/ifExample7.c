/*
Combining multiple conditions in a single condition
Three logical operators:
AND: && (all conditons to be true separately)
OR: || (any one of the condition to be true)
NOT: ! (opposite of the given cobditon is true)
*/

#include <stdio.h>
#include <ctype.h>
int main()
{
    char dummy;
    printf("Enter value for dummy:");
    scanf("%c", &dummy);

    if (isalpha(dummy) && dummy == 'a')                 //condition-1 (logical AND: &&)
        printf("You entered an alphabet with value a"); //executes if condition at line 13 is true. Notice we can skip {} in case there is single statmenet after if or else
    else if (isalpha(dummy) || isdigit(dummy))          //condition-2 (logical OR: ||)
    {
        printf("You entered a digit or aplhabet"); //executes if condition in line 13 is false and line 15 is true
    }

    if (! ispunct(dummy)) //conditon-3 (logical NOT)
        printf("\n Executes if dummy is not a punctutation mark. Notice if at line 24 is independt of if-else at line 17 and 19");
        
return 0;
}