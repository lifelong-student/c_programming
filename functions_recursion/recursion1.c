#include <stdio.h> 
/*
Program to explain recursion- 
e.g. 1 factorial of given number 
*/ 
unsigned int factorial(unsigned int n) //f(5),f(4),f(3), f(2), f(1), f(0)
{ 
	if (n == 0) 
		return 1; 
	return n * factorial(n - 1); //120,  24, 6, 2, 1
} 

int main() 
{ 
	int num = 5; 
	printf("Factorial of %d is %d", 
		num, factorial(num)); //120
	return 0; 
} 

/* Iterative approach
#include <stdio.h> 
  
// Function to find factorial of given number 
unsigned int factorial(unsigned int n) 
{ 
    int res = 1, i; 
    for (i = 2; i <= n; i++) 
        res *= i; 
    return res; 
} 
  
// Driver code 
int main() 
{ 
    int num = 5; 
    printf("Factorial of %d is %d", 
           num, factorial(num)); 
    return 0; 
}
*/
