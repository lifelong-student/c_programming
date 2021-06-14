#include <stdio.h>
/*
Program to demonstrate:
1) ways to declare and initialize an array
2) find size and #elements of an array
*/
int main()
{
    int array1[4];                   //array declaration: array1 is an array of 4 elements of int type
    int array2[8] = {0};             //array declaration with elements assigned a default value of 0
    int array3[] = {1, 2, 3, 4, 5}; //array declaration with elements assigned a default value of 1,2,3,4,5 for respective elements
    int array[5]={1,2};     //partial intialization

    int array1_size = sizeof(array1); //find total size (#bytes) in an array
    int array2_size = sizeof(&array2[0]);
    int array3_size = sizeof(array3);

    printf("Array1 size: %d\n", array1_size);
    printf("Array 2 size: %d\n", array2_size);
    printf("Array 3 size: %d\n", array3_size);

    int num_ele_array1 = sizeof(array1) / sizeof(array1[0]); //find #elements in each array
    int num_ele_array2 = sizeof(array2) / sizeof(array2[0]); //divide total size of array by size of single element
    int num_ele_array3 = sizeof(array3) / sizeof(array3[0]);

    printf("Number of elements in Array1: %d\n", num_ele_array1);
    printf("Number of elements in Array 2: %d\n", num_ele_array2);
    printf("Number of elements in Array 3:: %d\n", num_ele_array3);

    return 0;
}
