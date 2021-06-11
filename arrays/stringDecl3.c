#include <stdio.h>

/* Program to show gets() and puts()
*/
int main()
{
    char string1[25];
    gets(string1); //reads the entire string including whitespaces
    puts("Here is the input provided by you:\n");
    puts(string1);

    return 0;
}