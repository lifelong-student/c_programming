/* Program ro show usage of #elif directive */

#include <stdio.h>

#define STUDENTS 75

int main()
{
#if STUDENTS < 75
    printf("Strength of students can not be less than 75\n");
#elif STUDENTS > 75  //elif eg
    printf("Strength of students can not be more than 75\n");
#elif STUDENTS == 75 //elif eg
    printf("Strength of students is 75\n");
#endif

    return 0;
}