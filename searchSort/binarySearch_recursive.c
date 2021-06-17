/* 
C program for Binary Search -RECURSIVE APPROACH
*/
#include <stdio.h>
int binarySearchRecursive(int arr[], int left, int right, int key);

int main()
{
    int arr[] = {1, 3, 7, 9, 5, 9, 10, 15, 67, 78, 101, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;
    int result = binarySearchRecursive(arr, 0, n - 1, key);
    if (result == -1)
        printf("Element is not present in array");
    else
        printf("Element is present at index %d", result);
    return 0;
}

int binarySearchRecursive(int arr[], int left, int right, int key)
{
    if (right >= left) 
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] > key)
            return binarySearchRecursive(arr, left, mid - 1, key);

        return binarySearchRecursive(arr, mid + 1, right, key);
    }
    return -1;
}
