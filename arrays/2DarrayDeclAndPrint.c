#include <stdio.h>
/*
Program to demonstrate:
a. run-time initialization of 2D array/matrix
b. printing a 2D array
*/
void main()
{
    int matrix[5][3]; //matrix is an array having 5 rows and 3 columns where every entry is a integer (4B); total #entries=5x3=15 #Bytes=15x4B=60B
    int i, j, k;
    printf("Enter matrix elements"); //run-time initialization; taking matrix elements as input
    
    for (i = 0; i <5; i++) //0,1,2,3,4, (5)
    {
        for (j = 0; j < 3; j++) //0,1,2, (3)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nMatrix is as follows: \n");
    for (i = 0; i < 5; i++) //printing matrix 0,1
    {
        putchar('\n');
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[i][j]); //here no & symbol is required
        }
    }
}