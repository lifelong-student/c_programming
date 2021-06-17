/* Program for Merge Sort */
#include <stdio.h>
#include <stdlib.h>

void combine(int arr[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1; //'n1' contains #ele in left_array
    int n2 = right - mid;    //'n2' contains #ele in right_array

    int left_array[n1], right_array[n2]; // delcare 2 arrays for left and right sub-arrays

    for (i = 0; i < n1; i++) // Copy data to left_array
        left_array[i] = arr[left + i];

    for (j = 0; j < n2; j++) // Copy data to  right_array
        right_array[j] = arr[mid + 1 + j];

    // Merge the left_array and right_array back into arr[left..right]
    i = 0;    // Initial index of left_array
    j = 0;    // Initial index of right_array
    k = left; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (left_array[i] <= right_array[j])
        {
            arr[k] = left_array[i];
            i++;
        }
        else
        {
            arr[k] = right_array[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left_array into arr, if there are any
    while (i < n1)
    {
        arr[k] = left_array[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right_array[], if there are any
    while (j < n2)
    {
        arr[k] = right_array[j];
        j++;
        k++;
    }
}

/* left is for left index and right is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int left, int right)
{
    if (left <= right) //till there are more than 1 ele present in list
    {
        // Same as (left+right)/2, but avoids overflow for
        // large left and h
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid); //for left portion 
        mergeSort(arr, mid + 1, right); //right portion

        combine(arr, left, mid, right);
    }
}

int main()
{
    int arr[] = {23, 30, 1, 100, 35, 700, 156, 191};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
