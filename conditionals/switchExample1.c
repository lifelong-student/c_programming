#include <stdio.h>
#include <string.h>
int main()
{
    char class;
    char class[10]; 
    printf("Enter class name: ");
    scanf("%s", class);

    switch(class)
    {
        case strcmp(class, "B1") == 0:
         printf("You are welcome to class %s.\n", class);
         break;
         case "B2":
         printf("You are welcome to class %s.\n", class);
         break;
         case "B3":
         printf("You are welcome to class %s.\n", class);
         break;
         case "B4":
         printf("You are welcome to class %s.\n", class);
         break;
         case "B5":
         printf("You are welcome to class %s.\n", class);
         break;
         default:
          printf("No such class");
         
    }
    return 0;
}

