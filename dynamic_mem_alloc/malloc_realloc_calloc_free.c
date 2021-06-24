/*
This program is used to demonstrate dynamic memory allocation:
1. malloc()
2. calloc()
3. realloc()
4. free()
*/
#include <stdio.h>

int main()
{

    int *arr1 = NULL;
    int n, i;
    n = 5;

    arr1 = (int *)malloc(n * sizeof(int)); //dynamically created array using 'malloc'

    for (i = 0; i < n; ++i)
    {
        arr1[i] = rand();
        printf("%d-th ele of array is: %d\n", i + 1, arr1[i]);
    }

    putchar('\n');
    int *arr2 = (int *)calloc(n, sizeof(int)); //dynamically created array using 'calloc'
    for (int i = 0; i < n; i++)
        printf("%d-th ele of array is: %d\n", i + 1, arr2[i]);

    n = 10;

    putchar('\n');
    arr2 = realloc(arr2, n * sizeof(int)); //resizing of array using 'realloc'
    for (int i = 0; i < n; i++)
        printf("%d-th ele of array is: %d\n", i + 1, arr2[i]);

    free(arr1);
    free(arr2);

    if(arr1 == NULL)
    printf("no");

    return 0;
}
