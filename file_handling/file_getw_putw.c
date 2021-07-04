#include <stdio.h>
#include <stdlib.h>
/*
This programs explains usage of:
1. getw
2. putw
These are used to read/write integer values
 */
void main()
{
    FILE *Fptr;
    int i, j, k[6];
    Fptr = fopen("file1", "w");
    clrscr();
    if (Fptr == NULL)
    {
        printf("File could not be opened.");
        exit(1);
    }
    else
        fprintf(stdout, "File is open. Enter data.\n");
    for (i = 0; i < 6; i++)
        putw(k[i] = 5 * i, Fptr);
    fclose(Fptr);
    Fptr = fopen("file1", "r");
    printf("The values of elements of array k are as below.\n");
    for (j = 0; j < 6; j++)
        printf("%d\t", getw(Fptr));
    printf("\n");
    fclose(Fptr);
}