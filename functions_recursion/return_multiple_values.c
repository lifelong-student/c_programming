#include <stdio.h>
/*
Program to demonstrate function definition:
num1. with arguments
num2. with multiple return type
*/
void foo(int num1, int num2, int *largest_num, int *smallest_num)
{
	if (num1 > num2)
	{

		*largest_num = num1;
		*smallest_num = num2;
	}
	else
	{
		*largest_num = num2;
		*smallest_num = num1;
	}
}

int main()
{
	int great, small, x, y;

	printf("Enter two numbers: \n");
	scanf("%d%d", &x, &y); //3 ,4

	foo(x, y, &great, &small); //mixed call - call by val + call vy ref
	printf("\nThe greater number is %d and the"
		   "smaller number is %d",
		   great, small);

	return 0;
}
