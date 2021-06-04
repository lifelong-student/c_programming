#include <stdio.h>
/*
Program to demonstrate:
1) nested while loop
*/
int main()
{
    int stepSize=1;
    char alphabet;
    scanf("%c",alphabet);
    
    while (stepSize <= 4) //1,2,3,4,(5)
    {
        alphabet = 97; // (same as) alphabet = 'a';
        while (alphabet <= 'e') //97 <=101, 98<=101, 99<=101 100 101 102<=101
        {
            printf("%c ", alphabet); //a, b c d e
            alphabet++; //b  c d e f
        }
        printf("\n");
        stepSize++; //2
    }
    return 0;
}

