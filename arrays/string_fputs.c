#include <stdio.h>
/*This program is to demonstrate:
a. fgets(): safer way to take input string (including white-spaces)
b. fputs(): allows printing to console(stdout) or file
*/
int main()
{
    char name[20];
    //gets(name);
    fgets(name, 18, stdin);
    printf("%s", name);
    //puts(name);
    fputs(name,stdout);
    return 0;
}