#include <stdio.h>
/* This program demonstrates use of
1. fscanf
2. fprintf
These functions can handle mixed data
*/
void main()
{
    FILE *f;
    f = fopen("file.txt", "w");
    fprintf(f, "Reading data from a file is a common feature of file handling. \n");
    fclose(f);

    char arr[50];
    f = fopen("file.txt", "r");
    while (fscanf(f, "%s", arr) != EOF)
    {
        printf("%s ", arr);
    }
    fclose(f);
}