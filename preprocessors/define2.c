#include <stdio.h>

// program to show macro with arguments
#define AREA(l, b) (l * b)
int main()
{
	int l1 = 10, l2 = 5, area;

	area = AREA(l1, l2);

	printf("Area of rectangle is: %d", area);

	return 0;
}
