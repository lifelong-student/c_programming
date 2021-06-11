#include <stdio.h>
/*
This program demonstrates:
1) searching in an array using linear search algo
*/
int main()
{
    int students[] = {1, 3, 7, 5, 7, 8};
    int i = 0, searchKey = 7;
    int numOfStudents = sizeof(students) / sizeof(students[0]);

    for (i = 0; i < numOfStudents; i++) 
    {
        if (students[i] == searchKey)
        {
            printf("student %d found at %d-th location \n", searchKey, i);
            return 0;
        }
    }
    
    printf("student %d not found \n", searchKey);
    return 0;
}