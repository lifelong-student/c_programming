/* C Program to show:
a. usage of atoi()
b. string arithmetic

 */
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str1[]={'g','o','o','d','\0'};
    char str2[]="101";
    /* atoi(): present in stdlib.h C library
    used to convert numbers present in string form to corresponding integer numbers
    */
    int sum=12+atoi(str2);
        
    printf("Sum of constant 12 and str2(converted to int via atoi() ) :  %d\n",sum);

    int res=str1[3]+1; //str1[3]='d' , ASCII for 'd'=100, 100+1=101
    printf("Result of arithmetic operation on element of char-array is: %d",res);
}