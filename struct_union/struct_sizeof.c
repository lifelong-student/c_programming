/*C program to illustrate size of struct */

#include <stdio.h> 
  
int main() 
{ 
  
    struct abc { 
        // sizeof(double) = 8 
        double z; 
  
        // sizeof(int) = 4 
        int x; 
  
        // sizeof(short int) = 2 
        short int y; 
    }abc_var; 
  
    printf("Size of struct: %ld\n", sizeof(struct abc)); //Way-1: using struct name
    printf("Size of struct: %ld", sizeof(abc_var)); //Way-2: using struct variable
  
    return 0; 
} 