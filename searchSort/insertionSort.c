#include <stdio.h>
#include <math.h>
/*
C program for insertion sort
*/

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) //#iterations/passes
    {
        key = arr[i]; //a[1], a[2],a[3],a[4]
        j = i - 1;    //Initially 'i'=1 and 'j'=0; index of sorted list
        //0,1,2,3

        /* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {23, 30, 1, 100, 35, 700, 156, 191};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
