#include <stdio.h>
// C program to demonstrate selection sort

void swap(int *first, int *second) //helper function to swap two numbers
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min; //min will store index of minimum element

    for (i = 0; i < n - 1; i++) //0-4
    {
        min = i; // everytime find the minimum element in unsorted array and update 'min'
        for (j = i + 1; j < n; j++) //0-4 1-4 2-4 3-4
            if (arr[j] < arr[min])
                min = j;

        // Swap element at 'min' with first element
        swap(&arr[min], &arr[i]);
    }
}

int main()
{
    int arr[] = {23, 30, 1, 100, 35, 700, 156, 191};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
