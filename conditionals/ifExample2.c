#include <stdio.h>
#include <string.h>
int main()
{
    char class[10];
    printf("Enter class name: ");
    scanf("%s", class);

    // true if number is less than 0
    if (strcmp(class, "B1") == 0)
    {
        printf("You are welcome to class %s.\n", class);
    }
    else
    {
        printf("You are not allowed");
    }
    return 0;
}