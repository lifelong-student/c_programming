/*
Program to demonstrate following bitwise operators as per priority and associtavity:
a. <<, >> (L->R)
b. & (L->R)
c. ^ (L->R)
d. | (L->R)
*/
#include <stdio.h>

int main()
{
    /*
     Note:
    bitwise values of integers used are as follows:
    2: 010, 4:100, 5:101, 3: 011, 7: 111, 8: 1000
    */
    int num = 8;
    printf("Result of left shift, << by 2: %d\n", num << 2);
    printf("Result of right shift, >> by 2: %d\n", num >> 2);
    printf("Result of bitwise and, & by 2: %d\n", 4 & 5);
    printf("Result of bitwise xor, ^ by 2: %d\n", 7 ^ 3);
    printf("Result of left or, | by 2: %d\n", 5 | 3);

    return 0;
}