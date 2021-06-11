#include <stdio.h>
/*This program demonstrates traversing an array */
void main()
{
    int students[] = {1, 3, 5, 7, 8};
    int i = 0;
    printf("Students of class are :\n");
    for ( ;i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("students %d = %d \n", i+1, students[i]);
    }
}