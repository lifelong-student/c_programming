#include <stdio.h>
/*
Program to demonstrate:
1) Iterating through an array
2) Taking input of array elements via scanf (Run time initialization)
*/
int main()
{
    int arr[5];
    char ch_arr[5];

    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
       // scanf("%d",arr+i);

    printf("Array elements are: \n");
    for (int i = 0; i < 5; i++)
        printf("%d\t", arr[i]);
        // print("%d",*(arr+i));

    putchar('\n'); //printf("\n");
   getchar();

    for (int i = 0; i < 5; i++)
    {
        ch_arr[i] = getchar();
        getchar();
        
    }

    printf("Array elements are: \n");
    for (int i = 0; i < 5; i++)
    {
        putchar(ch_arr[i]);
        putchar('\n');
    }

    return 0;
}
