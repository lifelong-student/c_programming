/*
This program is used to demonstrate dynamic memory allocation:
1. malloc()
2. calloc()
3. realloc()
4. free()
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char *arr1 = NULL;
    int n, i;
    n = 5;

    arr1 = (char *)malloc(n * sizeof(char)); //dynamically created array using 'malloc'
    arr1="abcd";
    puts(arr1);
    printf("Size of array after malloc: %d\n", sizeof(arr1));
    return 0;
}
