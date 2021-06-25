#include <stdio.h>
/* Program to demonstrate structure definition, assignemnt and printing of data-members.
 */

//students is a struct having 3 datamembers
struct students
{
    char name[25];
    int roll_num;
    char batch[5];
};
int main()
{
    /* student_list is an array of of structure 'students' */
    struct students student_list[3]={
        {"Sid",1,"B7"},
        {"Ruby",2,"B7"},
        {"Ana",3,"B7"}
    };


    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s\t", student_list[i].name);
        printf("Id: %d\t", student_list[i].roll_num);
        printf("Batch: %s\n", student_list[i].batch);
    }
    return 0;
}