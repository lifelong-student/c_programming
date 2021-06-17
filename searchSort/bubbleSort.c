// To demonstrate Bubble sort -optimized implementation
#include <stdio.h>
#include <stdbool.h> //required for 'bool'

void swap(int *xp, int *yp) //helper function for swapping two numbers
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int* arr, int n)
{
    int i, j;
    bool swapped; //takes care if no swap has occured
    for (i = 0; i < n - 1; i++) //passes n-1 (5):4         
    {
        swapped = false;
        for (j = 0; j < n - 1 -i; j++) //finding min from adj eles: 0-4
        {
            if (arr[j] > arr[j + 1])
             {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        // IF no swaps occur in any iteration of the inner loop, then break out of it
        if (swapped == false)
            break;
    }
}

int main()
{
    int arr[] = {23, 30, 1, 100, 35, 700, 156, 191};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
