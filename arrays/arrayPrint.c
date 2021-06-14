#include <stdio.h>
/*
Program to demonstrate:
1) Iterating through an array elements (printing entire array)
2) Printing single array element
3) Compile Time Initialization of array
*/
int main()
{
    //compile time
    int array1[3];                   //array declaration: array1 is an array of 3 elements of int type
    int array2[8] = {1};             //array declaration with elements assigned a default value of 0
    int array3[5] = {1, 2, 3, 4, 5}; //array declaration with elements assigned a default value of 1,2,3,4,5 for respective elements

    int array1_size = sizeof(array1) / sizeof(array1[0]); //12/4=3

    int i;
    printf("array1 elements:\n");     //contains garbage value as array1 is not initialized
    for (i = 0; i < array1_size; i++) //0,1,2,3
    {
        printf("%d-th index element: %d \n", i, array1[i]);
    }

    printf("Enter three values for array1 elements:\n"); //run-time initialization
    for (i = 0; i < array1_size; i++)
    {
        scanf("%d", &array1[i]);
    }

        for (i = 0; i < array1_size; i++) //0,1,2,3
        {
            printf("%d-th index element: %d \n", i, array1[i]);
        }

        printf("array2 elements:\n");
        for (i = 0; i < 8; i++)
        {
            printf("%d-th element: %d \n", i, array2[i]);
        }

        printf("array3 elements:\n");
        for (i = 0; i < 5; i++) //0,1,2,3,4,5
        {
            printf("%d-th element: %d \n", i, array3[i]);
        }

        //Printing single element
        printf("1st element of array1: %d\n", array3[0]);     //printing 1st element;notice index 0
        printf("2nd element of array2: %d \n", array3[1]);    //printing 2nd element; notice index 1
        printf("3rd-th element of array3: %d \n", array3[2]); //printing 3rd element; notice index 2

        return 0;
    }
