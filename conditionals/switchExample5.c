#include <stdio.h>
int main()
{
    char choice; //y
    int num; //5
    printf("Enter choice and number: \n");
    scanf("%c%d", &choice, &num);

    // Outer Switch
    switch (choice) //y
    {
    case 'y':
    case 'Y':
        // Inner Switch
        switch (num) //3
        {
        case 2:
            printf("Choice is 2");
            break;
        case 3:
            printf("Choice is 3");
            break;
        }
        break;
        
    case 'n':
    case 'N':
        printf("Choice is No");
        break;
    default:
        printf("Choice is other than Y or N");
        break;
    }
    return 0;
}