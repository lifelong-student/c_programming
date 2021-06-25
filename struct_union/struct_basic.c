#include <stdio.h>
#include<string.h>
/* Program to demonstrate structure definition, assignemnt and printing of data-members.
 */

//students is a struct having 3 datamembers
struct students{
    char name[25];
    int roll_num;
    char batch[5];
};
int main()
{
     /* student is the variable of structure students*/
     struct students student;

     /*Assigning the values of each struct member here*/
     //students.name="Joe"; //invalid
     strcpy(student.name,"Joe");
     student.roll_num = 1;
     strcpy(student.batch,"B5");

     /* Printing the values of struct members */
     printf("Student's Name: %s", student.name);
     printf("\nStudent's Id: %d", student.roll_num);
     printf("\nStudent's batch: %s", student.batch);
     return 0;
}