#include <stdio.h>
/*
Program to explain recursion- 
e.g. sum of elements of an array 
*/

#include <stdio.h>
int sum_of_array(int arr[],int size);

int main() {
    int arr[]={2,4,6,8,10};
    int size= sizeof(arr)/sizeof(arr[1]);

    int result = sum_of_array(arr,size);

    printf("sum_of_array = %d", result);
    return 0;
}

int sum_of_array(int arr[],int size) {
    if (size<= 0) 
        return 0; 
    return (sum_of_array(arr, size-1) + arr[size - 1]);
}



