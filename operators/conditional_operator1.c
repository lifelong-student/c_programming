/*
Program to demonstrate condtional/ternary operator (?:)
It is useful for decision making
*/
#include <stdio.h>

int main()
{
    int m = 5, n = 4, o = 3;

    //e.g. 1
    (m > n) ? printf("%d > %d", m, n) : printf("%d > %d\n", n, m);

    //e.g. 2
    int res = m > n ? m : n;
    printf("%d\n", res);

    //e.g. 3
    //m>n? res=m: res=n; //not allowed. Try uncommenting and will recieve an error

    //e.g. 4
    res = 2 > 3 ? 5 > 3 ? 2 : 4 : 6 < 1 ? 3 : 5;
    printf("%d\n", res);

    //e.g. 5
    m < n   ? m < o ? printf("m is smallest") : printf("o is smallest")
      : n < o ? printf("n is smallest") : printf("o is smallest");

    return 0;
}