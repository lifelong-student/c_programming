/* C Program to print a string:
a. char by char
b. all at once
 */
#include <stdio.h>
int main()
{
    char names[23];
    int i = 0;
        
    printf("\n Please Enter any String  :  ");
    scanf("%s", names);
        
    //Way-1 %c char by char
    while (names[i] != '\0')
    {
        printf("%c",names[i]);
        i++;
    }
    printf("\n");

    //Way 2: %s all at once
    char class[10]="B5";
    printf("%s",class);
    return 0;
}