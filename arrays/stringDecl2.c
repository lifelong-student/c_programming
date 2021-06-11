#include <stdio.h>

/* Program to illustrate scanf and printf for string
*/
int main()
{
    char string1[25];
    char string2[25];

    //read a word (without newline)
    //scanf("%s", &string1[0]);
    scanf("%s", string1); //line 11 and 12 are same: both indicates base address
    printf("%s\n", string1);
    
    //read entire line
    scanf("\n%[^\n]", string2);
    printf("%s\n", string2);
    return 0;
}