#include <stdio.h>
#include <string.h>

/* Program to show:
union's usage
*/
union abc
{
    int a;
    float b;
    char c[20];
};

int main()
{

    union abc data;

    data.a = 75;
    printf("info.a : %d\n", data.a);

    data.b = 98.7;
    printf("info.b : %f\n", data.b);

    strcpy(data.c, "Programming Fundamentals");
    printf("info.c : %s\n", data.c);

    printf("Values of data-members of union abc after assigning maximum sizeddata-member: \n");
    // c is max sized data-member, all other data-member's value will be corrupted now
    printf("info.a : %d\n", data.a);
    printf("info.b : %f\n", data.b);
    printf("info.c : %s\n", data.c);

    //New value updated to 98.7
    data.b = 98.7;
    printf("info.b : %f\n", data.b);

    return 0;
}