#include <stdio.h>
/*
Program to demonstrate:
1) nested while loop
*/
int main()
{
    int stepSize;
    char alphabet;
    while (stepSize <= 4)
    {
        alphabet = 97; // (same as) alphabet = 'a';
        while (alphabet <= 'e')
        {
            printf("%c ", alphabet);
            alphabet++;
        }
        printf("\n");
        stepSize++;
    }
    return 0;
}