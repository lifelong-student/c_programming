#include <stdio.h>
/*
Program to demonstrate complex MACROs
*/
#define CONDITION if(2<3)
#define SHOW {printf("2 is smaller than 3\n"); printf("EXAMPLE USAGE OF COMPLEX MACRO");}

int main()
{
    CONDITION SHOW; //replaced by: if(2<3) printf("2 is smaller than 3");
    return 0;
}
