#include <stdio.h>
#include "extern3.h"  //include the file in which variable is defined
/* 
Program to demonstrate extern variable
*/

extern int num_stud; //variable is defined in a different file
extern int subject; //variable is defined in a different file

int main() {

    printf("num_stud: %d\n", num_stud);
    printf("subjects: %d\n", subjects);
}
