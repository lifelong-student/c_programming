#include <stdio.h>
#include <string.h>
int main()
{
    char class[10];
    int roll;
    printf("Enter class name and roll-number: ");
    scanf("%s%d", class, &roll);

    if (strcmp(class, "B7") == 0)
    {
        if (roll > 0 && roll < 76)
        {
            printf("You are welcome to class %s.\n", class);
        }
        else
        {
            printf("No student exists with given roll number: %d in class", roll);
        }
    }
    else
    {
        printf("You are not allowed \n");
    }

    return 0;
}