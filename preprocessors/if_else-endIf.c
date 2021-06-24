#include <stdio.h>
#include <conio.h>
#define NUMBER 1
void main()
{
#if NUMBER == 0
    printf("Value of Number is: %d", NUMBER);
#else
    print("Value of Number is non-zero");
#endif
    getch();
}