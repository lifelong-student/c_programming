#include <stdio.h>
/* Program to demonstrate nested strucrture
*/
struct person
{
    char name[20];
    int age;
    char dob[10];
};
struct student
{
    struct person info; //nested
    int roll_no;
    float marks;
};
int main()
{
    struct student s1={{"Dhiraj",29,"20-04-1989"},23,99.0f};


    printf("Name: %s\n", s1.info.name);
    printf("Age: %d\n", s1.info.age);
    printf("DOB: %s\n", s1.info.dob);
    printf("Roll no: %d\n", s1.roll_no);
    printf("Marks: %.2f\n", s1.marks);
    return 0;
}