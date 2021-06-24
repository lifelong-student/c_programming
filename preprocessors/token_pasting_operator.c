#include <stdio.h>
#define MAKE(arg1, arg2) arg1##arg2 //token pasting over 2 argmuents
#define PASTE(arg1, arg2, arg3) arg1##arg2##arg3 //token pasting over 3 argmuents

int main()
{
    int students_B5 = 75;
    int subjectsB5 = 5;
    printf(" Usage of token pasting operator over 2 arguments: %d\n", MAKE(subjects,B5));
    printf(" Usage of token pasting operator over 3 arguments: %d\n", PASTE(students, _, B5));

    return 0;
}