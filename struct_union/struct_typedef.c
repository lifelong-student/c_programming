#include <stdio.h>
/* Program to demonstrate usage of typedef (provides alias to a structure)
*/
//students is a struct having 3 datamembers defined with typedef
typedef struct{
    char name[25];
    int roll_num;
    char batch[5];
}students;

int main()
{
     /* student is the variable of structure students*/
     students student; //see that there is no 'struct' keyword as 'students' structure is typedef

     /*Assigning the values of each struct member here*/
     strcpy(student.name,"Joe");
     student.roll_num = 1;
     strcpy(student.batch,"B5");

     /* Printing the values of struct members */
     printf("Student's Name: %s", student.name);
     printf("\nStudent's Id: %d", student.roll_num);
     printf("\nStudent's Batch: %s", student.batch);
     return 0;
}