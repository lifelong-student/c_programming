#include <stdio.h>
#include <string.h>
int main()
{
 char class[10]; //combination of characters; array of char; string

    printf("Enter class name: ");
    scanf("%s", class);
    
    if (strcmp(class, "B7") == 0)
    {
        printf("You are welcome to class %s.\n", class);
    }
    return 0;
}




