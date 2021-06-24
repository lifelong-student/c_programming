#include <stdio.h>
/*
Program to demonstrate proper use of expression in macro definition
*/
#define MAC1 75 - 45
#define MAC2 7 - 2
#define MAC3 (75 - 45)
#define MAC4 (7 - 2)
int main()
{
    int res = 0;

    res = MAC1 / MAC2; //replaced by:   75-44/7-2
    printf("Value of res w.r.t MAC1 and MAC2: %d\n", res);
    res = MAC3 / MAC4; // replaced by; (75-44)/(7-2)
    printf("Value of res w.r.t MAC3 and MAC4: %d\n", res);

    return 0;
}
