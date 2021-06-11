#include <stdio.h>
int main()
{
    char name[2][20];
    int i, n;
    // reading string from user
    for (i = 0; i < 2; i++)
        scanf("%s[^\n]", name[i]);

    // dispaying strings
    printf("\nEntered names are:\n");
    for (i = 0; i < 2; i++)
        puts(name[i]);

    return 0;
}