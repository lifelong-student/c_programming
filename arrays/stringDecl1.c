#include<stdio.h> 

/* Program to illustrate diff ways to declare and initialize array
*/ 
int main() 
{    
 
    char string1[8] = "Program"; //compile time initialize string (size: atleast 1 char extra for NULL than total #char in string)
    char string2[20] = {'P','r','o','g','r','a','m','\0'}; //size of char array can be much larger than the #characters assigned
    char string3[] = "Program"; //can skip providing size if initialization done at the time of decl
      
    // print string 
    printf("%s\n",string1); 
    printf("%s\n",string2);
    printf("%s\n",string3);
         
    return 0; 
}