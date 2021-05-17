#include <stdio.h>
int main()
{
    int number, sum = 0, remainder;
    printf("Enter a number:");
    scanf("%d", &number);

    for (int i = 0; number > 0; i++) //12345
        {
        remainder = number % 10; //5,4,3,2,1
        sum += remainder;        //5,(5+4=9),(9+3=12),14,15
        number /= 10;            //1234,123,12,1,0
    }

    while (number > 0)
    {
        remainder = number % 10;
        sum = sum + remainder;
        number = number / 10;
    }
    printf("Sum is=%d", sum);
    return 0;
}