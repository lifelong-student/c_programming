/*
Program to demonstrate 'extern' storage class:
Highlight: Variable delcared with 'extern' keyword is defined at one location(globally/other file) and used in other location.

a. storage area: Data segment
b. default value: zero (0)
c. scope: global/across files
d. lifetime: till program ends
*/
#include <stdio.h>
#include "extern3.h" //include the file in which variable is defined

extern int num_stud; //variable is defined in a different file
extern int subject;  //variable is defined in a different file

int main()
{

    printf("num_stud: %d\n", num_stud); //accessing an extern variable
    printf("subjects: %d\n", subjects); //accessing an extern variable
    foo(); //accessing an extern function
    return 0;
}
