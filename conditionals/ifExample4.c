#include <stdio.h>
#include <string.h>
int main()
{
    char class[10];
    printf("Enter class name: ");
    scanf("%s", class);

    if (strcmp(class, "B1") == 0)
    {
        printf("You are welcome to class %s.\n", class);
    }
    else if (strcmp(class, "B2") == 0)
    {
        printf("You are welcome to class %s.\n", class);
    }
    else if (strcmp(class, "B3") == 0)
    {
        printf("You are welcome to class %s.\n", class);
    }
    else if (strcmp(class, "B4") == 0)
    {
        printf("You are welcome to class %s.\n", class);
    }
    else
    {
        printf("NO such class exists.\n", class);
    }
    return 0;
}