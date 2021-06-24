#include <stdio.h>
/* Program to show use of stringizing operator */
#define getVarName(x) #x

int main()
{
    int student = 75;

    printf("Name of variable is: <%s> and its value is: %d\n", getVarName(student), student);

    return 0;
}