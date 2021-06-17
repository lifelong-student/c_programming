#include <stdio.h>
/*
Proigram to demonstrate Quick Sort
*/

void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}
int partition(int arr[], int left, int right)
{
    int pivot = arr[right]; //last ele is taken as pivot
    int i = (left - 1);
    for (int j = left; j <= right - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[right]); //to place pivot at correct location
    return (i + 1); //index of pivot
}
void quickSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int pi = partition(arr, left, right); //index of pivot element
        quickSort(arr, left, pi - 1); //left of pivot: smaller
        quickSort(arr, pi + 1, right); //right of pivot: greater
    }
}

int main()
{
    int arr[] = {23, 30, 1, 100, 35, 700, 156, 191};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printf("The sorted array is: ");
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}