#include <stdio.h>
/*
Program to demonstrate:
a. run-time initialization of 3D array (multi-dimensional)
b. printing a 2D array
*/
void main()
{
    int matrix[2][3][2];
    int i, j, k;
    printf("Enter matrix elements:\n"); //run-time initialization; taking matrix elements as input

    for (i = 0; i < 2; i++) //0-1
    {
        for (j = 0; j < 3; j++) //0-2
        {
            for (k = 0; k < 2; k++) //0-1
                scanf("%d", &matrix[i][j][k]); //see & is used for address
                
        }
    }
    printf("\nMatrix is as follows: \n");
    for (i = 0; i < 2; i++) //printing matrix
    {
        putchar('\n');
        for (j = 0; j < 3; j++)
        {
            putchar('\n');
            for (k = 0; k < 2; k++)
                printf("%d\t", matrix[i][j][k]); //here no & symbol is required
        }
    }
}
