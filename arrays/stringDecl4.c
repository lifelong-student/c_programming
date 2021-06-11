#include <stdio.h>

/* Program to show gets() and puts()
*/
int main()
{
    char string1[25];
    gets(string1);
    puts("Here is the input provided by you:\n");
    puts(string1);

    return 0;
}